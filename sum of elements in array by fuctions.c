#include<stdio.h>
int add_elements(int arr[], int size)
{
	int i,sum=0;
	for(i=0;i<size;i++)
	{
	sum+=arr[i];
	}
	return sum;
}
void main()
{
	int n,i;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	  scanf("%d",&a[i]);
	int res =  add_elements(a,n);
	printf("%d",res);
}
/*input:- 5
          10 20 30 40 50
output:- 150*/
