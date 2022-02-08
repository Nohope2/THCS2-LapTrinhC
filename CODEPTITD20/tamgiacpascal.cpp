#include<stdio.h>
int tamgiacpascal(int k,int n)
{
	if(k==0||k==n) return 1;
	else return tamgiacpascal(k-1,n-1) +tamgiacpascal(k,n-1);
}
int main()
{
	int n,i,k;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(k=0;k<=i;k++)
		{
			printf("%d  ",tamgiacpascal(k,i));
		}
		printf("\n");
	}
}
