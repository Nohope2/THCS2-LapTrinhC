#include<stdio.h>
long long n,a[105][105];
int gt(long long n)
{
	long long i;
	if(n==1) return 0;
	if(n==2) return 1;
	long long f1=0,f2=1,fbn;
	for(i=3;i<=n;i++)
	{
		fbn=f1+f2;f1=f2;f2=fbn;
	}
	return fbn;
}
void taosomang()
{
	long long m=1;
	while(m<=n*n)
	{	   
	    long long chay,hang,cot,i,j;
		chay=0;hang=n-1;cot=n-1;
		while(chay<=n/2)
		{
			for(i=chay;i<=cot;i++) a[chay][i]=gt(m++);
			for(i=chay+1;i<=hang;i++) a[i][cot]=gt(m++);
			for(i=cot-1;i>=chay;i--) a[hang][i]=gt(m++);
			for(i=hang-1;i>chay;i--) a[i][chay]=gt(m++);
			chay++;hang--;cot--;
		}
		m++;
	}
}
void kq()
{
	long long i,j;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++) printf("%lld ",a[i][j]);
		printf("\n");
	}
}
int main()
{
	scanf("%lld",&n);
	gt(n);
	taosomang();
	kq();
}
