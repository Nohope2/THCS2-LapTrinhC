#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include<ctype.h>
struct Node {
	char data[50];
	int counter;
};
void themHoacDem(char *word, struct Node *words, int *size) {
	int i;
	bool tonTai = false;
	for(i = 0; i < *size; i++) {
		if(strcmp(word, words[i].data) == 0) {
			words[i].counter++;
			tonTai = true;
			break;
		}
	}
	if(!tonTai) {
		strcpy(words[*size].data, word);
		words[*size].counter = 1;
		(*size) ++;
	}
}
void tachVaDem(char *s, struct Node *words, int *size) {
	char *p;
	const char* delim = " \t\n,.?!;:";
	for(p = strtok(s, delim); p != NULL; p = strtok(NULL, delim)) {
		themHoacDem(p, words, size);
	}
}
void hienThi(struct Node* words, int size) {
	int i;
	for(i = 0; i < size; i++) {
		printf("%s %d\n", words[i].data, words[i].counter);
	}
}
int main(){
	char s[10000],s1[10000];
	fgets(s,sizeof(s), stdin);
	struct Node words[200];
	int size = 0;
	for(int i=0;i<strlen(s);i++)
	{
	  s1[i]=tolower(s[i]);
	}
	tachVaDem(s1, words, &size);
	hienThi(words, size);
	return 0;
}
