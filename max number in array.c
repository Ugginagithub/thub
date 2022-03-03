#include<stdio.h>
void main()
{
	int n;
	scanf("%d",&n);
	int i,a[n],max=1;
	for(i=0;i<n;i++)
	{
	 scanf("%d",&a[i]);
	}
	max=a[0];
	for(i=1;i<n;i++)
	{
		if ( a[i]>max)
		{
			max=a[i];
		}
	}
	printf("%d",max);
}
// input:- 4
//       -1,14,167,-16
//output:-167 (max number in array)
