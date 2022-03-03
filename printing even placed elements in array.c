#include<stdio.h>
void main()
{
	int size;
	scanf("%d",&size);
	int arr[size],i;
	for (i=0;i<=size;i++)
	{
		scanf("%d",&arr[i]);
	if (arr[i]%2==0 && i%2==0)
	{
		printf("%d ",arr[i]);
	}
}
}
//input:- 6
//     :- 12 13 14 15 16 17
//output:-12 14 16(printing elements in even places also elements in 0 place)
