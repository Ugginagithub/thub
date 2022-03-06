/*String handing functions in c
  String.h header file*/
#include<stdio.h>
#include<string.h>
void main()
{
    /*	char str[100] = "Aditya123";
	//int i;
	//for(i=0; str[i] !='\0';i++)
	int n = strlen(str);
	printf("%d",n);*/
	char str1[100]="aditya123";
	char str2[100];
/*	strcpy (dstn,src)
	strcpy()copies source string into destination string*/
	strcpy(str2,str1);
	printf("%s",str2);
}
