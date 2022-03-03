#include<stdio.h>
void main()
{
	int size;
	printf("enter size");
	scanf("%d",&size);
	int arr[size],i,sum=0;
	
	for(i=0;i<size; i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=size-1;i>=0;i--)
	{
	printf ("%d ",arr[i]);
	}
}
// input:- 5
//      :- 1 2 3 4 5
// output:- 5  4 3 2 1
