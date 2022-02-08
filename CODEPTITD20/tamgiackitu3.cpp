#include<stdio.h>
int main()
{
	int n,i,j,k,h=65,t;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		k=n-1;t=0;
		for(j=1;j<=i;j++)
		{
			if(j==1) 
			{
				printf("%c ",h);h++;
			}
			else
			{
				if(j==2)
				{
					t=h+k-1;
			    	printf("%c ",t);k--;
				}
				else 
				{
					t=t+k;
					printf("%c ",t);k--;
				}
				
			}
		}
		printf("\n");
	}
}
