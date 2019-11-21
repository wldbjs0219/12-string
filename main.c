#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	int i;
	char c;
	FILE* fp;
	
	fp=fopen("sample.txt","r");
	if(fp==NULL)
	{
		printf("wrong path!");
		return -1;
	}
	
	while( (c=fgetc(fp)) != EOF)
	{
		putchar(c);
	}
	
	fclose(fp);
	return 0;
}



