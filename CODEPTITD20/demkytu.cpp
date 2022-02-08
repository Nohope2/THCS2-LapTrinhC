#include<stdio.h>
#include<string.h>
int main()
{
	char a[101];
     gets(a);
     int i,d1=0,d2=0,d3=0;
    for(i=0;i<strlen(a);i++)
    {
   	 	if(a[i]>=48&&a[i]<=57) d1++;
   	   else if(a[i]>=65&a[i]<=90) d2++;
   	 	else if(a[i]>=97&&a[i]<=122) d2++;
   	 	else d3++;
	}
   printf("%d %d %d",d2,d1,d3);
}
