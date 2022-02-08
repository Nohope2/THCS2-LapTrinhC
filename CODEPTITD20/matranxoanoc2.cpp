#include<stdio.h>
void nhapmang(long long n,long long m,long long a[][105])
{
	int i,j;
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++) scanf("%lld",&a[i][j]);
	}
}
void inmang(long long n,long long a[][105],long long m)
{
	long long i,j,b,chay,hang,cot,x=1;
	chay=0;hang=n-1;cot=m-1;
	while(x<=m*n)
	{
		for(i=chay;i<=cot;i++) 
		{
			printf("%lld ",a[chay][i]);x++;
		}
		for(i=chay+1;i<=hang;i++)  {
			printf("%lld ",a[i][cot]);x++;
		}
	   	if(chay!=hang)
	   	{
	   		for(i=cot-1;i>=chay;i--){
	   			 printf("%lld ",a[hang][i]);x++;
			   }
	    }
	   if(chay!=cot)
	   {
	   	 for(i=hang-1;i>chay;i--){
	   	 	 printf("%lld ",a[i][chay]);x++;
			}
	   }
		chay++;hang--;cot--;
		if(x==m*n) break;
	}
}
int main()
{
	long long t,T;
	scanf("%lld",&T);
	for(t=1;t<=T;t++)
	{
		long long n,m,a[105][105];
		scanf("%lld%lld",&n,&m);
		nhapmang(n,m,a);
		inmang(n,a,m);
		printf("\n");
	}
}
