#include<stdio.h>
void main()
{
	int size;
	scanf("%d",&size);
	int arr[size],i,count=0;
	for (i=0;i<=size;i++)
	{
		scanf("%d",&arr[i]);
	if (arr[i]%2!=0)
	{
		count++;
	}
if (count==size)
{
	printf("true");
	break;
}
else
{
	printf("flase");
	break;
}
}
}
// input:-5
//       :- 1 2 3 4 5 (there are some even numbers )
// output:- flase(it is not odd array)
