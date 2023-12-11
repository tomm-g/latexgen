#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void helpPrint(){
	printf("./latexgen [FILENAME]\n");
	printf("File name should be one whole word, .tex is appended at the end of file name automatically.\n");
}

int main(int argc, char **argv){
	// argc refers to number of command line arguements passed in
	// argv contains actual arguments
	FILE *fptr;

	if (!strcmp(argv[1], "--help")){
		helpPrint();
	}
	else if (strcmp(argv[1], "--help")){

	//printf("%s", argv[1]);

	int nameLen = strlen(argv[1]);

	char fileExt[5] = ".tex";
//	char fileName[4+nameLen];
	char fileName[50];

	strcat(fileName, argv[1]);
	strcat(fileName, fileExt);
	//printf("%s\n", fileName);

	char texData[200] =
"\\documentclass{article}\n\n\\usepackage{graphicx}\n\\usepackage{float}\n\\usepackage{amsmath}\n\\usepackage{amssymb}\n\\usepackage{bbm}\n\n\\graphicspath{{./images}}\n\n\\begin{document}\n\n\\end{document}\n";
	

	//FILE *fptr;

	//printf("sample data: %s\n", texData);
	
	fptr = fopen(fileName, "w");
	//printf("%s file created\n", fileName);

	fprintf(fptr, "%s",texData);
	//printf("test data written to %s file\n", fileName);

	fclose(fptr);
	//printf("%s closed\n", fileName);

	return 0;
	}
	}
