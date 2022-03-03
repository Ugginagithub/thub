#include<stdio.h>
void main()
{
     int a,b,i=1;
     scanf("%d%d",&a,&b);//12 18 
     while (a*i%b !=0)
     {
     	i++;//i=3
	 }
	 printf("%d",a*i);//12*3=36
     
}
//input:- 12,18
//output is:-36
