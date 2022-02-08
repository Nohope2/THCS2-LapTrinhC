#include<stdio.h>
int main()
{
	int n,i,j,m,k;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{ 
			m=66;k=66+2*(i-2);
		   for(j=1;j<=2*i-1;j++)
		   {
			 if(j==1||j==2*i-1) printf("@");
			else
			{
			  if(m<=k)
			  {
				printf("%c",m);m=m+2;
			  }
			  else  
		      {
				k=k-2;printf("%c",k);
		      }
			}
	   	  }
	    	printf("\n");
	}
}
