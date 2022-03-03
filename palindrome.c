#include<stdio.h>
void main()
{
	int n,rev=0, r;
	scanf("%d",&n);
	int t=n;
	while(n)
	{
		r=n%10;
		rev= rev*10+r;
		n=n/10;
    }
	printf("%d\n",rev);
	if(rev == t)
	{
		printf("palindrome");
	}
	else
	{
		printf("not a palindrome");
    }
}
