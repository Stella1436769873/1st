// COMP1521 19T2 ... lab 1
// cat4: Copy input to output

#include <stdio.h>
#include <stdlib.h>

static void copy (FILE *, FILE *);

int main (int argc, char *argv[])
{
	if(argc ==1){			//there are no command-line arguments,
		copy (stdin, stdout);				//call copy with stdin and stdout
	}
  	else {
		for(int i = 2; i <= argc; i++){				// for each command-line argument,
			FILE *f;
			if( (f=fopen(argv[i],"r")) ){		
				copy (f, stdout);			//call copy with the open file and stdout,
				fclose(f);				//close the file
			}				
			else{
				printf("Can't read %c\n",*argv[i]);
			}
		}
	}
	return 0;
}

// Copy contents of input to output, char-by-char
// Assumes both files open in appropriate mode
static void copy (FILE *input, FILE *output)
{
	char *ch;
	char buffer[BUFSIZ];
	while((ch = fgets(buffer, BUFSIZ, input))!=NULL){
		fputs(ch,output);
	}
}
