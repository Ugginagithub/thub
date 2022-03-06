#include<stdio.h>
int main()
{
	int s1,s2,s3,s4,s5,count=0;
	scanf("%d%d%d%d%d",&s1,&s2,&s3,&s4,&s5);
	count=(s1>=35)+(s2>=35)+(s3>=35)+(s4>=35)+(s5>=35);
	printf("no.of students passed = %d",count);
	return 0;
}
