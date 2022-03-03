#include<stdio.h>
void main()
{
	int n;
	scanf("%d",&n);
	int arr[n],i;
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	int rev[n],j;
	for(i=n-1,j=0;i--;j++)
	{
		rev[j]=arr[i];
	}
	for(i=0;i<n;i++)
	{
		printf("%d",rev[i]);
	}
	
}
//some error in the code!!!!!!
