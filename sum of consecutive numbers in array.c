#include<stdio.h>
void main()
{
	int n;
	scanf("%d",&n);
	int arr[n],i,sum,max;
    for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
		}	
		max=arr[0]+arr[1];
		for(i=1;i<n-1;i++)
		{
			sum=arr[i]+arr[i+1];
			if(sum>max)
			{
				max=sum;
			}
		}
		printf("%d",max);
}
//input:-6
//       1 -7 6 4 -2 11
//output:-10
//       (sum of 6&4=10 its only the maximum sum in the given consequetive numbers in array)
