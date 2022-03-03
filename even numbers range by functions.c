#include<stdio.h>
void evens_in_range(int a, int b)
{
	int i;
	for(i=a;i<=b;i++)
	{
		if(i%2==0)
		printf("%d ",i);
	}
}
void main()
{
	int i,x,y;
	scanf("%d%d",&x,&y);
	for(i=0;i<10;i++)
	{
	evens_in_range(x,y);
	break;
    }
	
}
