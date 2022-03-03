#include<stdio.h>
void main()
{
	int ch;
	scanf("%c",&ch);
	if(ch>='a' && ch<='z')// a<ch<z
	{
		printf("lower case");
	}
	else if(ch>='A' && ch<='Z')// A<ch<Z
	{
		printf("upper case");
	}
	else if( ch>='0' && ch<='9')// 0<ch<9
	{
		printf("digit");
	}
	else // other symbol
	{
		printf("experssion");
	}
}/*we can also give condition as if(ch>=98 && ch<=122)==if(ch>='a'&& ch<='z')*/
