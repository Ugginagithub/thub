#include<stdio.h>
float product(float a, float b)
{
	float c;
	c=a*b;
	return c;
}
void main()
{
	float x,y;
	scanf("%f%f",&x,&y);
	float multiply;
     multiply = product(x,y);
	printf("%f",multiply);
}
