#include<stdio.h>
typedef long long ll;
ll uc(ll x,ll y)
{
	if(y==0) return x;
	return uc(y,x%y);
}
ll crow(ll x,ll y)
{
	return (x*y)/uc(x,y);
}
int main()
{
	int T;
	scanf("%d",&T);
	while(T--)
	{
		int n,m;
		scanf("%d%d",&n,&m);
		ll now=n;
		for(int i=n+1;i<=m;i++)
		{
			now=crow(now,i);
		}
		printf("%lld\n",now);
	}
}
