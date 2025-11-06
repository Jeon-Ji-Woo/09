#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main(void) {
	char input[100];
	FILE *fp;
	char c;
	
	fp = fopen("C:\sample.txt", "r");
	if (fp == NULL)
	{
		printf("Failed to open file!\n");
		return -1;
	}
	#if 0
	while((c = fgetc(fp)) != EOF)
	{
		putchar(c);
	}
	#endif
	
	#if 1
	while(fgets(input,100,fp) >0)
	{
		printf("%s",input);
	}
	#endif
	
	fclose(fp);
}
