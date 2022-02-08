#include<stdio.h>
#include<string.h>
int main ()
{
	int n;
	while (1)
	{
		scanf("%d",&n);
		if(n==0) break;
		char S1[10000],S2[10000],S[10000];
		scanf("%s%s%s",S1,S2,S);
		int dem=0;
		int kt=1;
		while (1)
		{
			if (kt==0) break;
			dem++;
			if (dem>50)
			{
				kt=0;
				break;
			}
			char Stg[20000]={};
			int j=0;
			for(int i=0;i<n;i++)
			{
				Stg[j]=S2[i];
				j++;
				Stg[j]=S1[i];
				j++;
			}
			int x=strcmp(Stg,S);
			if (x==0)
			{
				kt=1;
				break;
			}
			else
			{
				for (int i=0;i<n;i++)
				{
					S1[i]=Stg[i];
					S2[i]=Stg[i+n];
				}
			}
		}
		if (kt==0) printf("-1\n");
		else printf("%d\n",dem);
	}
	return 0;
}
