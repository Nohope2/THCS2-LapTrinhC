#include<stdio.h>
#include<math.h>
#include<stdbool.h>
bool nt(long long a)
{
	long long i;
	if(a<2) return false;
	for(i=2;i<=sqrt(a);i++)
	{
		if(a%i==0)
		{
		  return false;
		}
	}
    return true;
}
void nhap(long long a[][55],int n)
{
	long long i,j;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++) scanf("%d",&a[i][j]);
	}
}
int tnt(long long a[][55],long long n)
{
	long long sum=0,i,j;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i<=j)
			{
				if(nt(a[i][j])) sum+=a[i][j];
			}
		}
	}
	return sum;
}
int main()
{
	long long a[55][55],n;
	scanf("%lld",&n);
	nhap(a,n);
	long long x=tnt(a,n);
	printf("%lld",x);
	
}
