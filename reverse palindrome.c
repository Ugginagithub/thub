#include<stdio.h>
int reverse(int n)
{
	int r,rev=0;
	while(n)
	{
		r=n%10;
		rev=rev*10+r;
		n=n/10;
	}
	return rev;
}
void main()
{
	int x;
	scanf("%d",&x);
	do
	{
		x+=reverse(x);
	}while (x!=reverse(x));
	printf("%d",x);
}
// input:- 95
// output:-1111(add (95+59) and then also add result and reverse number of the result until the palindrome appears)
// (95+59=154   154+451= 605  605+506= 1111)
//             
