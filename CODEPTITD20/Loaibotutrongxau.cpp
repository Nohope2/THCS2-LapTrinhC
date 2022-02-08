#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void spcecen(char *now, int pos, int len) {
	int i;
	int size = strlen(now);
	for(i = pos; i <= size - len; i++) {
		now[i] = now[i + len];
	}
}
void removeStr(char *now, char *t) {
	int i;
	int len = strlen(t);
	for(i = 0; now[i] != '\0'; i++) {
		if(strstr(&now[i], t) == &now[i]) {
			spcecen(now, i, len);
			i--;
		}
	}
}
int main(){
	char s1[1000];
	char s2[1000];
    gets(s1);
	fflush(stdin);
    gets(s2);
	int len = strlen(s2);
	if(len > 0) {
		s2[len] = '\0';
	}
	int size = strlen(s1);
	if(size > 0) {
		s1[size] = '\0';
	}
	removeStr(s1,s2);
	puts(s1);
	return 0;
}
