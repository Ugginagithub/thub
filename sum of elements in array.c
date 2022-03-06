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
	for(i=0;i<size;i++)
	{
		if(arr[i]%2==0)
		{
			sum=sum+arr[i];
		}
	}
	printf("%d",sum);
}
//sum of even elements in array
//input:-size is 3 
// elements are 2 5 6
// output:-2+6=8
