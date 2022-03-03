#include<stdio.h>
void main()
{
	int n;
	scanf("%d",&n);
	int i,a[n],mini=1;
	for(i=0;i<n;i++)
	{
	 scanf("%d",&a[i]);
	}
	mini=a[0];
	for(i=1;i<n;i++)
	{
		if ( a[i]<mini)
		{
			mini=a[i];
		}
	}
	printf("%d",mini);
}
//input:-4
//     -1 -14 167 -16
//output:--16

