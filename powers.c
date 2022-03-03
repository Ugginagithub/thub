#include<stdio.h>
#include<math.h>
void main()
{
	int a,b,c,k,p;
	scanf("%d%d%d",&a,&b,&k);
	c=pow(a,b);
	printf(" value of c is %d\n",c);
	printf("%d",c%k);
}
