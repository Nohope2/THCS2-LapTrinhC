#include<stdio.h>
#include<bits/stdc++.h>
#include<stdbool.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
#define delim " \n"
using namespace std;
int main()
{
	int t;
	scanf("%d\n",&t);
	while(t--)
	{
		char s1[1000];
		scanf("\n%[^\n]s",s1);
		char s2[1000];
		scanf("\n%[^\n]s",s2);
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
	    char t[200],t2[200];
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
		for(int i=1;i<m;i++)
	    {
	    	for(int j=1;j<m;j++)
	    	{
	    		if(strcmp(y[j-1],y[j])>0)
	    		{
	    			strcpy(t2,y[j-1]);
	    			strcpy(y[j-1],y[j]);
	    			strcpy(y[j],t2);
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
		printf("\n");
}
}
