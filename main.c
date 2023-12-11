#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(int argc, char **argv){
	// argc refers to number of command line arguements passed in
	// argv contains actual arguments
	
	printf("%s", argv[1]);

	int nameLen = strlen(argv[1]);

	char fileExt[5] = ".tex";
	char fileName[4+nameLen];

	strcpy(fileName, argv[1]);
	strcpy(fileName, fileExt);
	printf("%s", fileName);


//	FILE *fptr
//	
//	fptr = fopen()

	return 0;
	}
