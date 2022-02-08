#include<stdio.h>
#include<string.h>
int main(){
	int t;
	scanf("%d\n",&t);
	while(t--){
		char a[2005],b[2005];
		gets(a);gets(b);
		int n=strlen(a),m=strlen(b),pos1=0,c[2005],d[1005],e[2005],pos2=0,x,pos3=0,pos4=0,pos5=0;
		while(pos1<n)
		{
			if(a[pos1]>=48&&a[pos1]<=57)
			{
				x=0;
				while(a[pos1]>=48&&a[pos1]<=57){
					x=x*10+(a[pos1]-48);
					pos1++;
				}
				c[pos3]=x;
				pos3++;
			}
			else pos1++;
		}
		while(pos2<m)
		{
			if(b[pos2]>=48&&b[pos2]<=57)
			{
				x=0;
				while(b[pos2]>=48&&b[pos2]<=57){
					x=x*10+(b[pos2]-48);
					pos2++;
				}
				d[pos4]=x;
				pos4++;
			}
			else pos2++;
		}
		for(int i=pos3,j=0;i<pos3+pos4;i++,j++)	c[i]=d[j];
		for(int i=1;i<pos4+pos3-2;i+=2){
			for(int j=i+2;j<pos3+pos4;j+=2){
				if(c[i]<c[j]){
					int k=c[i];c[i]=c[j];c[j]=k;
					k=c[i-1];c[i-1]=c[j-1];c[j-1]=k;
				}
				else if(c[i]==c[j]){
					c[i-1]+=c[j-1];
					c[j-1]=0;
				}
			}
		}
		for(int i=0;i<pos3+pos4;i+=2){
			if(c[i]!=0){
				e[pos5]=c[i];
				e[pos5+1]=c[i+1];
				pos5+=2;
			}
		}
		for(int i=0;i<pos5;i+=2){
			printf("%d*x^%d",e[i],e[i+1]);
			if(i<pos5-2) printf(" + ");
		}
		printf("\n");
	}
}
