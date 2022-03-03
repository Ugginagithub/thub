#include<stdio.h>
int main()
{
    int n,i,count=0,l,r,k;
    scanf("%d%d%d",&l,&r,&k);
    for(i=l;i<=r;i++)
    {
        if(k/i==0)
        {
            printf("%d",i);
        }
    }
}
