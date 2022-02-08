#include<stdio.h>
#include<string.h>
int main(){
	int t;
	scanf("%d\n", &t);
	while(t--)
	{
		char s[13];
		gets(s);
		int a =s[6] - 48;
		int b =s[7] - 48;
		int c =s[8] - 48;
		int d =s[10] - 48;
		int e =s[11] - 48;
        if((a==6||a==8)&&(b==6||b==8)&&(c==6||c==8)&&(d==6||d==8)&&(e==6||e==8))  printf("YES\n");
	    else if (a==b&&b==c) 
		{
           if(d==e) printf("YES\n");
           else printf("NO\n");
	    }
	   	else if ( a<b&&b<c&&c<d&&d<e)  printf("YES\n");
	   	else  printf("NO\n");
    }
	return 0;
}
