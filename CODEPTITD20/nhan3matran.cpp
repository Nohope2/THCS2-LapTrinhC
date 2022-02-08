#include<stdio.h>
#include<string.h>
#include<math.h>
#include<ctype.h>
#define alphaa "abcdefghijklmnopqrstuvwxyz"
#define ALPHAA "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
#define sz(x) strlen(x)
#define FORS(i,a,b) for(int i=a;i<=b;i++)
#define FOR(i,a) for(int i=0;i<a;i++)
#define PI 3.141592653589793238
typedef double ld;
typedef long long ll;
typedef unsigned long long ull;
int m,n,p,q;
int a[50][50],b[50][50],c[50][50],d[90][90]={},f[100][100]={};
void init()
{
	scanf("%d%d%d%d",&m,&n,&p,&q);
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++) scanf("%d",&a[i][j]);
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<p;j++) scanf("%d",&b[i][j]);
	}
	for(int i=0;i<p;i++)
	{
		for(int j=0;j<q;j++) scanf("%d",&c[i][j]);
	}
}
void process()
{
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<p;j++)
		{
			for(int l=0;l<n;l++) d[i][j]+=a[i][l]*b[l][j];
		}
	}
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<q;j++)
		{
			for(int l=0;l<p;l++) f[i][j]+=d[i][l]*c[l][j];
		}
	}
}
void cinnn()
{
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<q;j++) printf("%d ",f[i][j]);
		printf("\n");
	}
}
int main()
{
	init();
	process();
	cinnn();
    return 0;
}

