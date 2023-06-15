#include<stdio.h>
main()
{
	FILE *p;
	char data[1000];
	
	p=fopen("file.txt","a");
	if(p == NULL)
	{
		printf("file could not open");
	}
	else
	{
		printf("enter data :-");
		gets(data);
		fputs("\n",p);
		fputs(data,p);
		printf("data add successfull..");
	}
	fclose(p);
	
	printf("\n=====================\n");
	p=fopen("file.txt","r");
	if(p == NULL)
	{
		printf("file coulde not open");
	}
	else
	{
		while(fgets(data,10,p)!=NULL);
		{
			printf("%s",data);
		}
	}
	fclose(p);
}
