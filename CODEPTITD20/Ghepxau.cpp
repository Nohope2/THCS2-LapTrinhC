#include<stdio.h>
#include<string.h>
int main(){
	int t,m;
	scanf("%d",&t);
	char a[150][150];
	while(t--)
	{
		scanf("%d",&m);
		for(int i=0;i<m;i++) scanf("%s",a[i]);
		char t[105];
	    for(int i=0;i<m;i++)
		{
	    	for(int j=1;j<m;j++)
			{
	    		char q[100],p[100];
	    		strcpy(q,a[j]);
				strcat(q,a[j-1]);
				strcpy(p,a[j-1]);
				strcat(p,a[j]);
	    		if(strcmp(q,p)<0){
	    			strcpy(t,a[j-1]);
	    			strcpy(a[j-1],a[j]);
	    			strcpy(a[j],t);
				}
			}
		}
		for(int i=0;i<m;i++) printf("%s",a[i]);
		printf("\n");
	}
	return 0;
}
