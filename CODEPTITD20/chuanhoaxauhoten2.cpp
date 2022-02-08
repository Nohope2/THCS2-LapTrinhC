#include <stdio.h>
#include <string.h>
#include<stdlib.h>
void xoa(char *now)
{
	int i;
	while(now[0]==' ') strcpy(&now[0],&now[1]);
	for(i=0;i<strlen(now)-1;i++)
	{
		if(now[i]==' '&&now[i+1]==' ')
		{
			strcpy(&now[i],&now[i+1]);
			i--;
		}
	}
	while(now[strlen(now)-1]==' ') strcpy(&now[strlen(now)-1],&now[strlen(now)]);
}
void chuanhoachuoi(char *now)
{
	int i;
	for(i=0; i<strlen(now); i++) {
		if(now[i]>='A' &&now[i]<='Z') now[i]+=32;
	}
	now[0]-=32;
	for(i=1; i<strlen(now); i++) {
		if(now[i]==' '&&now[i+1]>='a' &&now[i+1]<='z') now[i+1]-=32;
	}
}
void chuanhoachuoi1(char *now)
{
	int i;
	for(i=0; i<strlen(now); i++) {
		if(now[i]>='a' &&now[i]<='z') now[i]-=32;
		if(now[i]==' ') break;
	}
}
int dauCachDau(char* s) { // tim dau cach dau tien
	int len = strlen(s);
	int i;
	for(i = 0; i < len; i++) {
		if(s[i] == ' ') {
			return i;
		}
	}
	return -1;
}
int dauCachCuoi(char* s) { // tim dau cach cuoi cung
	int len = strlen(s);
	int i;
	for(i = len - 1; i >= 0; i--) {
		if(s[i] == ' ') {
			return i;
		}
	}
	return -1;
}
void hienThi(char *s) { // hien thi ket qua ra man hinh
	int first = dauCachDau(s);
	int last = dauCachCuoi(s);
	int i;
	int len = strlen(s);
	if(first!=-1&&last!=-1) {
		// in ten
		for(i = first+1; i <= last; i++) {
			printf("%c", s[i]);
		}
		// in ra ho
	} 
		for(i = last+1; i < len - 1; i++) {
			printf("%c",s[i]);
		}
		printf(", ");
		for(i = 0; i < first; i++) {
			printf("%c", s[i]);
		}
		// in dem
		printf("\n");
}
int main(){
	int T;
	scanf("%d\n",&T);
	while(T--)
	{
	char s[100];
	fgets(s, 99, stdin);
	xoa(s);
	chuanhoachuoi(s);
	chuanhoachuoi1(s);
	hienThi(s);
	}
	return 0;
}
