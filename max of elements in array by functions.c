#include<stdio.h>
#include<limits.h>
int max_elements(int arr[],int size)
{
	int max=INT_MIN,i;
	for(i=0;i<size;i++)
	{
	   if(arr[i]>max)
	   max=arr[i];
	}
	return max;
}
void main()
{
	int n, i;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	  scanf("%d",&a[i]);
	int res =  max_elements(a,n);
	printf("%d",res);
}
/*input:- 5
        :- -1 -2 -3 -4 -5
output:- -1(maximum numbers in array)*/
