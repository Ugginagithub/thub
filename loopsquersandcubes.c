#include<stdio.h>
void main()
{
	int n,m;
	scanf("%d%d",&n,&m);
	while (n<=m)
	{ 
	printf("%d %d %d\n",n,n*n,n*n*n);
	n++;
 }
}
