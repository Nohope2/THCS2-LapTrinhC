#include<stdio.h>
#include<stdbool.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
#define delim " \n"
int main()
{
	char s1[1000];
	gets(s1);
	char s2[1000];
	gets(s2);
	int n=0,m=0;
	char x[100][100]={}; 
	char y[100][100]={};
    char *p = strtok(s1, delim);
    int c[100]={};
   while (p!= NULL)
    {
        bool check = 0;
        for(int i = 0; i < n; i++)
        {
            if (strcmp(x[i], p) == 0) 
            {
                check = 1;
                break;
            }
        }
        if(check == 0)
        {
            strcpy(x[n], p);
            n++;
        }
        p = strtok(NULL, delim);
    }
    char *z= strtok(s2,delim);
    while (z!= NULL)
    {
        bool check = 0;
        for(int i=0;i<m;i++)
        {
            if (strcmp(y[i], z) == 0) 
            {
                check = 1;
                break;
            }
        }
        if(check == 0)
        {
            strcpy(y[m], z);
            m++;
        }
        z = strtok(NULL, delim);
    }
    char t[100],t2[100];
    for(int i=1;i<n;i++)
    {
    	for(int j=1;j<n;j++)
    	{
    		if(strcmp(x[j-1],x[j])>0)
    		{
    			strcpy(t,x[j-1]);
    			strcpy(x[j-1],x[j]);
    			strcpy(x[j],t);
			}
		}
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			if(strcmp(x[i],y[j])==0)
			{
				c[i]=1;
			}
		}
	}
	for(int i=0;i<n;i++)
	{
		if(c[i]!=1) printf("%s ",x[i]);
	}
}
