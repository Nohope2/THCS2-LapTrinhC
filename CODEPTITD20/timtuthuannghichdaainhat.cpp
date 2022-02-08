#include<stdio.h>
#include<stdbool.h>
#include<string.h>
char a[1000][30];
char s[1000][30];
int main(){
	int size = 0;
	int sizeMax = 0;
	char t[30];
	int c[10005]={0};
	int d[10005]={0};
	while( scanf("%s",&t)!=-1){
		int k=strlen(t),l=0,r=k-1,kt=1;
		while(l<r){
			if(t[l]==t[r]){
				l++;r--;
			}
			else{kt=0;break;}
		}
		if(kt==0) continue;
		else{
			if(sizeMax<strlen(t)) sizeMax=strlen(t);
			strcpy(a[size],t);
			size++;
		}
	}
	int n = size;
	size = 0;
	for(int i = 0 ; i < n ; i++ ){
		if( strlen(a[i]) == sizeMax){
			strcpy(s[size],a[i]);
			size++;
		}
	}
	n = size;
	for(int i=0;i<n;i++){
		int dem=0;
		for(int j=i+1;j<n;j++){
			if(strcmp(s[i],s[j])==0) {
				dem++;
				c[j]=-1;
			}
		}
		d[i]=dem+1;
	}
	for(int i=0;i<n;i++){
		if(c[i]!=-1)
			printf("%s %d\n",s[i],d[i]);
	} 
	return 0;
}
