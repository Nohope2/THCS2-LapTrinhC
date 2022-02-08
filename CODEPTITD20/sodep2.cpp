#include<stdio.h>
#include<string.h>

int main()
{
	int t,T;
	scanf("%d\n",&T);
	for(t=1;t<=T;t++)
	{
		 char x[505];
	     gets(x);
		 int d=strlen(x);
		 int l=0,r=d-1,sum=0,i;
	    if(x[l]==56&&x[r]==56)
		 {
		    while(r>l)
		 	{
		 	sum=sum+(x[r]+x[l]-96);
		 		r--;l++;
			}
		     if(sum%10==0) printf("YES");
			 else printf("NO");
		 }
		 if(x[0]==56&&x[d-1]!=56) printf("NO");
		 if(x[0]!=56&&x[d-1]==56) printf("NO");
		 if(x[0]!=56&&x[d-1]!=56) printf("NO");
		printf("\n");
	}
}
