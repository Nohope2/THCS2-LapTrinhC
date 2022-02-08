#include<stdio.h>
#include<string.h>
#define delim " \n"
int main()
{
	int t,T;
	scanf("%d\n",&T);
	for(t=1;t<=T;t++)
	{
		 char x[202];
	     gets(x);
	     char s[100][100];
	     int n=0;
		 char *p=strtok(x,delim);
		 while (p!= NULL)
       {
           strcpy(s[n], p);
            n++;
        p = strtok(NULL, delim);
       }
       printf("%d\n",n);
	}
}
