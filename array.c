#include<stdio.h>
void main()
{
	int n;
	printf("enter the array size\n");
	scanf("%d",&n);
	int a[n],i;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("array elements entered by user are:\n");
	for (i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
	}
}
