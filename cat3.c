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
	while((ch = fgets(buffer, BUFSIZ, input))!=NULL){
		fputs(ch,output);
	}
	return;
}

/*
	real 	0.019s -- real time for excuting this code in total, real almost equals to user+sys
	user 	0.016s -- the time ouside kernel (not use library), vary by the num of CPU
	sys  	0.000s -- the time inside kernel (excess library)
*/
