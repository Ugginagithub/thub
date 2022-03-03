#include<stdio.h>
void main()
{
	int i,n,sum=0;
	scanf("%d",&n);
	for(i=1;i<n;i++)
	{
		if(i%3==0 || i%5==0)
		{
			sum+=i;
	}
	}
	printf("%d",sum);
}
