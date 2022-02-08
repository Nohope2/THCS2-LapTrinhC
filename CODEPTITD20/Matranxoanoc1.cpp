include<stdio.h>
long long n,i,j,b,chay,hang,cot,a[105][105];
void taosomang()
{
	b=1;chay=0;hang=n-1;cot=n-1;
	while(chay<=n/2)
	{
		for(i=chay;i<=cot;i++) a[chay][i]=b++;
		for(i=chay+1;i<=hang;i++) a[i][cot]=b++;
		for(i=cot-1;i>=chay;i--) a[hang][i]=b++;
		for(i=hang-1;i>chay;i--) a[i][chay]=b++;
		chay++;hang--;cot--;
	}
}
void kq()
{
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++) printf("%lld ",a[i][j]);
		printf("\n");
	}
}
int main()
{
	scanf("%lld",&n);
	taosomang();
	kq();
}
