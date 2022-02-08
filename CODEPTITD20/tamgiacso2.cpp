#include<stdio.h>
int main()
{
	int n,i,j,m,k;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		m=1;k=2;
		for(j=1;j<=i;j++)
		{
			if(i%2!=0)
			{
				printf("%d",m);m=m+2;
			}
			else
			{
				printf("%d",k);k=k+2;
			}
		}
		printf("\n");
	}
}
