#include<stdio.h>
#include<string.h>
int main()
{
	char xau[101];
     gets(xau);
     int i;
    for(i=0;i<strlen(xau);i++)
    {
    	if(xau[i]>=97&&xau[i]<=122)
    	{
    		xau[i]=xau[i]-32;
		}
	}
	for(i=0;i<strlen(xau);i++) printf("%c",xau[i]);    
}
