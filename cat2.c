// COMP1521 19T2 ... lab 1
// cat2: Copy input to output

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
	int a = 0;
	while( (a = fgetc(input))!= EOF){
		fputc(a,output);
	}
	return;
}



/* 	real		0.034s
	user		0.028s
	sys			0.004s
*/