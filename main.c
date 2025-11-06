#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main(void) {
	char input[100];
	FILE *fp;
	int i;
	
	fp = fopen("C:\sample.txt", "w");
	
	for (i=0;i<3;i++){
		printf("input a word: ");
		scanf("%s",input); //문자열이라서 s, 배열이름은 & 안씀. 
		fprintf(fp, "%s\n", input); 
	}
	fclose(fp);
}
