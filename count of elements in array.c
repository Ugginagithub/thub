#include<stdio.h>
void main()
{
	int size;
	printf("enter size");
	scanf("%d",&size);
	int arr[size],i,count=0;
	
	for(i=0;i<size; i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<size;i++)
	{
		if(arr[i]%2==0)
		{
			count++;
		}
	}
	printf("%d",count);
}
// count of even numbers in array
//intput:-5 
//         1 2 3 4 5 
//output:- 2 (only two even numbers are there)
