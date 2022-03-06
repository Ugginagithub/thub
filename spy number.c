#include<stdio.h>
void main()
{
	int a,b,c,d,e,f,g,h,x;
	scanf("%d",&x);
	a=x/1000;//1124/1000=1
	b=x%1000;//1124%1000=124
	c=b/100;//124/100=1
	d=b%100;//124%100=24
	e=d/10;//24/10=2
	f=d%10;//24%10=4
    g=a+c+e+f;
    h=a*c*e*f;
    if(g==h)
    {
    	printf("spy number");
	}
	else
	{
		printf("not spy number");
	}
}
