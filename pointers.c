/*                                         POINTERS:                                         */
#include<stdio.h>
void main()
{
 /* int a=10;
  int *ptr;
  ptr=&a;
 // printf("value:%d\n",a);
  //printf("address:%d",&a);
  printf("address:%d\n",ptr);
  printf("value:%d\n",*ptr);*/
  
 /* int a=20,b=30;
  swap(&a,&b);// function call swap(20,30)
  printf("\na=%d b=%d",a,b);
}                                       	
swap(int *x,int *y)
{
	int t;
	t=*x;
	*x=*y;
	*y=t;
	printf("x=%d y=%d",*x,*y);*/
	
//---------->addtion of two numbers using pointers<--------- //
	int a=20,b=30;
	add(&a,&b);
}
add(int *x,int *y)
{
	int p;
	p=*x+*y;
	printf("%d",p);

}
