#include<stdio.h>
#include<math.h>
void nhapmang(int a[][100],int n)
{
	int i,j,d,c;
	for(i=0;i<n;i++)
	{
		d=i+1;
		for(j=0;j<n;j++) 
		{
			c=j+1;
			if(c<=d) a[i][j]=c;
		}
	}
}
void chuyenvi(int a[][100],int b[][100],int n)
{
	int i,j;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			b[i][j]=a[j][i];
		}
	}
}
void tichmatran(int a[][100],int b[][100],int n)
{
	int i,j,k;
	int c[100][100];
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			c[i][j]=0;
			for(k=0;k<n;k++)
		     {
		     	c[i][j]+=a[i][k]*b[k][j];
			 }
			 printf("%d ",c[i][j]);
		}
		printf("\n");
	}
}
int main()
{
	int t,T;
	scanf("%d",&T);
	for(t=1;t<=T;t++)
	{
		int a[100][100]={},b[100][100],n;
		scanf("%d",&n);
		nhapmang(a,n);
		chuyenvi(a,b,n);
		printf("Test %d:\n",t);
		tichmatran(a,b,n);
		printf("\n");
	}
}
