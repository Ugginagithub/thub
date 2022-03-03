#include<stdio.h>
void main()
{
	int r,c;
	scanf("%d%d",&r,&c);
	int mat1[r][c],i,j;
	for (i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&mat1[i][j]);
		}
	}
	int mat2[r][c];
		for (i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&mat2[i][j]);
		}
	}
		for (i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d \n",(mat1[i][j]+mat2[i][j])+(mat1[i][j]-mat2[i][j]));
		}
	}
}
	
