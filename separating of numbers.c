// 98475 % 10 =5
// 98475 / 10 =9847
#include<stdio.h>
void main()
{
	int n,r;
	scanf("%d",&n);
	
	while(n!=0)
	{
		r=n%10;
		printf("%d\n",r);
		n=n/10;
	}
}
// input:-678
// output:-8 7 6
