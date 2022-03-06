/*Strings in c 
strings can be called as character arrays 

Syntax for string decelration:
char stringname[size]
ex:
char str[6]
similar to 
int str[6]

string intialization:
char str[6]={'H','e','l','l','o','\0'};null charcter
int arr[6]={10,20,30,40,50,60}
char str[6]="Hello";*/
#include<stdio.h>
void main()
{
	char str[6]="Hello";
	printf("%s",str);
}
