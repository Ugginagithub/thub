#include<stdio.h>
void main()
{
	char s;
	int a,b;
	printf("enter the symbol\n");
	scanf("%ch",&s);
	switch(s)
	{
		case '+':
			printf("enter any two values\n");
	        scanf("%d%d",&a,&b);	
			printf("%d + %d = %d",a,b,a+b);
			break;
		case '-':
				printf("enter any two values\n");
	             scanf("%d%d",&a,&b);
		    printf("%d - %d=%d",a,b,a-b);
			break;
	    case '*':
		     	printf("enter any two values\n");
	scanf("%d%d",&a,&b);
	            printf("%d * %d =%d",a,b,a*b);
				break;
		case'/':
		       	printf("enter any two values\n");
	scanf("%d%d",&a,&b);
	           printf("%d/%d=%d",a,b,a/b);
			   break;	
	}
}	
