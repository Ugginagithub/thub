#include<stdio.h>
void main()
{
	char m[10];
	//scanf("%s",m);
   //	printf("%s",m);
	//gets(m);
	//puts(m);
	//scanf("%[abcd123]",m);
	//printf("%s",m);
	//scanf("%[0-9]",m);
	//printf("%s",m);
	//scanf("%[A-Z a-z 0-9\n\t?*]",&m);
    //  printf("%s",m);
	scanf("%[^\n]",m);
	printf("%s",m);
	  
}
