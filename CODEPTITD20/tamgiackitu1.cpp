#include<stdio.h>
int main()
{
	int n,i,j,k=97;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(i%2!=0)
		{
			k=k+i-1;
			for(j=1;j<=i;j++)
			{
				printf("%c ",k);k++;
			}
			printf("\n");
		}
		else 
		{
			k=k+i;
			for(j=1;j<=i;j++)
			{
				k--;
				printf("%c ",k);
			}
			printf("\n");
		}
	}
}
