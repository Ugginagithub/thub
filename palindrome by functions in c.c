#include<stdio.h>
int reverse(int num)
{
	int rev=0,r;
	while(num)
	{
		r=num%10;
		rev=rev*10+r;
		num=num/10;
	}
	return rev;
}
void main()
{
	int n;
	scanf("%d",&n);
	if(reverse(n)==n)
	{
		printf("palindrome");
	}
	else
	{
		printf("not a palindrome");
	}
}
