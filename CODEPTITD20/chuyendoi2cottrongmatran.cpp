#include<stdio.h>
int main()
{
	int a,b,ab[55][55]={},i,j;
	scanf("%d%d",&a,&b);
	for(i=1;i<=a;i++)
	{
		for(j=1;j<=b;j++) scanf("%d",&ab[i][j]);
	}
	int x,y;
	scanf("%d%d",&x,&y);
	for(i=1;i<=a;i++)
	{
		for(j=1;j<=b;j++)
		{
			if(j==x)
			{
				printf("%d ",ab[i][y]);
			}
			else{
				if(j==y) printf("%d ",ab[i][x]);
				else printf("%d ",ab[i][j]);
			}
			
		}
		printf("\n");
	}
	
}
