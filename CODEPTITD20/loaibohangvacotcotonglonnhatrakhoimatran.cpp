#include<stdio.h>
#include<math.h>
void nhapmang(int m,int n,int a[][100])
{
	int i,j;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++) scanf("%d",&a[i][j]);
	}
}
int ktrahang(int m,int n,int a[][100])
{
	int i,j,max=0,imax,dem;
	for(i=0;i<m;i++)
	{
		dem=0;
		for(j=0;j<n;j++)
		{
			dem+=a[i][j];
		}
		if(max<dem){
			max=dem;imax=i;
		}
	}
	return imax;
}
void inmang(int m,int n,int a[][100],int b[][100])
{
	int i,j;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i!=ktrahang(m,n,a)) b[i][j]=a[i][j];
		}
		printf("\n");
	}
}
int chuyenvi(int m,int n,int b[][100],int c[][100])
{
	int i,j;
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++) c[i][j]=b[j][i];
	}
	int cmax=0,jmax,dem;
	for(i=0;i<n;i++)
	{
		dem=0;
		for(j=0;j<m;j++)
		{
			dem+=c[i][j];
		}
		if(cmax<dem){
			cmax=dem;jmax=i;
		}
	}
	return jmax;
}
void xuatmang(int m,int n,int a[][100],int b[][100],int c[][100])
{
		int i,j;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i!=ktrahang(m,n,a)&&j!=chuyenvi(m,n,b,c)) printf("%d ",a[i][j]);
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
		int m,n,a[100][100],b[100][100],c[100][100];
		scanf("%d%d",&m,&n);
		nhapmang(m,n,a);
		inmang(m,n,a,b);
		printf("Test %d:\n",t);
		xuatmang(m,n,a,b,c);
	}
}
