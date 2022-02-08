#include<stdio.h>
#include<math.h>
void nhapmang(int a[][100],int n,int m)
{
	int i,j;
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++) scanf("%d",&a[i][j]);
	}
}
void chuyenvi(int a[][100],int b[][100],int n,int m)
{
	int i,j;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			b[i][j]=a[j][i];
		}
	}
}
void tichmatran(int a[][100],int b[][100],int m,int n)
{
	int i,j,k;
	long long c[1000][1000];
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			c[i][j]=0;
			for(k=0;k<m;k++)
		     {
		     	c[i][j]+=a[i][k]*b[k][j];
			 }
			 printf("%lld ",c[i][j]);
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
		int a[100][100],b[100][100],m,n;
		scanf("%d%d",&n,&m);
		nhapmang(a,n,m);
		chuyenvi(a,b,n,m);
		printf("Test %d:\n",t);
		tichmatran(a,b,m,n);
		printf("\n");
	}
}
