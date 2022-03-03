#include<stdio.h>
void main()
{
	int ch,n,pos;
	scanf("%c",&ch);
    if(ch>='a' && ch<= 'z')
    {
    	printf("%d",ch-96);
	}
	else
	{
		printf("%d",ch-64);
	}
}/*input:- a
output :- 1
input :-A
output:-1*/
