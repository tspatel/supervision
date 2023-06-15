#include<stdio.h>
main()
{
	FILE *p;
	char data[1000];
	
	p=fopen("E:/file.txt","w");
	
	if(p == NULL)
	{
		printf("file could not open");
	}
	else
	{
		printf("enter data :-");
		gets(data);
		fputs(data,p);
		printf("file open succesful");
	}
	fclose(p);
}
