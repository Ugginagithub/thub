#include<stdio.h>
void main()
{
	int size;
	scanf("%d",&size);
	int arr[size],i;
	for (i=0;i<=size;i++)
	{
		scanf("%d",&arr[i]);
	if (i%2!=0)
	{
		printf("%d",arr[i]);
	}
}
}
// input        =5 
//              12 13 14 15 16
//index places:-0  1  2  3  4
//output= 13 15 (odd place elements get printed)
