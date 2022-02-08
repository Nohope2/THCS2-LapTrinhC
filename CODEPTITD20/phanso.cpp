#include<stdio.h>
#include<math.h>
long long UCLN(long long x,long long y)
{
	if(y==0) return x;
	if(x%y==0) return y;
	return UCLN(y,x%y);
}
int main()
{
	int t,T;
	scanf("%d",&T);
	for(t=1;t<=T;t++)
	{
		long long a,b,c,d;
		scanf("%lld%lld%lld%lld",&a,&b,&c,&d);
		printf("Case #%d:\n",t);
		long long x=a*d,y=b*c,z=b*d,m,n,p,q,s1,Z;
		m=x;n=y;p=x+y;q=z;Z=z;
		long long s=UCLN(x,y);s1=s;
		long long t=UCLN(s,Z);
		long long S=UCLN(p,z);
		printf("%lld/%lld %lld/%lld\n",m/t,q/t,n/t,q/t);
		printf("%lld/%lld\n",(m+n)/S,z/S);
		printf("%lld/%lld\n",m/s1,n/s1);
	}
}
