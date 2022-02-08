#include<stdio.h>
int main()
{
	int n,i,j,x=1;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(j<=n-x) printf("~");
			else printf("*");
		}
		x++;
		printf("\n");
	}
}
