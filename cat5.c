// COMP1521 19T2 ... lab 1
// cat3: Copy input to output

#include <stdio.h>
#include <stdlib.h>

static void copy (FILE *, FILE *);

int main (int argc, char *argv[])
{
	copy (stdin, stdout);
	return EXIT_SUCCESS;
}

// Copy contents of input to output, char-by-char
// Assumes both files open in appropriate mode
static void copy (FILE *input, FILE *output)
{
	char *ch;
	char buffer[BUFSIZ];
	while((ch = fgets(buffer, BUFSIZ, input))!=EOF){
        if(ch == NULL){continue;}
        fputs(ch,output);
	}
}

/*
	real 	0.019s
	user 	0.016s
	sys  	0.000s
*/