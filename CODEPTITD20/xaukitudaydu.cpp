#include<stdio.h>
#include<string.h>
int cmax(int a,int b){
	if(a>b) return a;
	return b;
}
int main()
{
	char s[60];
	gets(s);
	int n=strlen(s);
	int a[60],f[60],dem=1;
	for(int i=0;i<n;i++) a[i]=s[i]-'a';
	for(int i=0;i<n;i++)
	{
		f[i] = 0;
		for(int j=i-1;j>=0;j--)
		{
			if(a[i]>a[j]) f[i]=cmax(f[i],f[j]);
		}
		f[i]+=1;
		dem=cmax(dem,f[i]);
	}
	printf("%d",26-dem);
	return 0;
}
