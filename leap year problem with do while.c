#include<stdio.h>
void main()
{
	int start=1600,end=1650;
	do
	{
		if(start%4==0)
		{
			printf("%d",start);
		}
	start=start+1;
}while(start<=end);
}
