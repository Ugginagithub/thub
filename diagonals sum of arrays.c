#include<stdio.h>
#include<math.h>
void main()
{
	int n;
	scanf("%d",&n);
	int mat[n][n],i,j;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&mat[i][j]);
		}
	}
	int p_diag=0,s_diag=0;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i==j)
			{
				p_diag+=mat[i][j];
			}
			if(i+j==n-1)
			{
				s_diag+=mat[i][j];
			}
		}
	}
	printf("%d",abs(p_diag-s_diag));
}
