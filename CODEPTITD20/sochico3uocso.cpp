#include<stdio.h>
#include<math.h>
#include<stdbool.h>
typedef long long ll;
bool a[1000000];
void solve()
{
	a[0]=false;
	a[1]=false;
	for(int i=2;i<=1e6;i++) a[i]=true;
	for(int i=2;i*i<=1e6;i++)
	{
		if(a[i]==false) continue;
		for(int j=i*i;j<=1e6;j+=i) a[j]=false;
	}
}
int main()
{
	solve();
	ll t;
	scanf("%lld",&t);
	while(t--)
	{
	ll l,r,dem=0;
	scanf("%lld%lld",&l,&r);
	if(l>r) 
	{
		ll tmp=l;l=r;r=tmp;
	}
	ll u=sqrt(l);
	ll w=sqrt(r);
	if(u*u!=l) u=u+1;
	for(ll i=u;i<=w;i++)
	{
		if(a[i]==true) dem++;
	}
  printf("%lld\n",dem);
}
}
