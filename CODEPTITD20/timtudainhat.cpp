#include<stdio.h>
#include<string.h>
struct word{
	char s[100];
	int ts;
};
int main(){
	struct word V[1000];
    char S[1000];
    int n = 0;
    while ( scanf("%s",&S) != -1 ){
    	int check = 0;
    	for ( int i = 0 ; i < n ; i++ ){
    		if ( strcmp(S,V[i].s) == 0 ){
    			V[i].ts++;
    			check = 1;
    			break;
			}
		}
		if ( check == 0 ){
			strcpy(V[n].s,S);
			V[n].ts = 1;
			n++;
		}
	}
	int max = strlen(V[0].s);
	
	for ( int i = 1 ; i < n ; i++ ){
		if ( strlen(V[i].s) > max ) max = strlen(V[i].s);
	}
	for ( int i = 0 ; i < n ; i++ ){
		if ( strlen(V[i].s) == max ){
			printf("%s %d %d\n",V[i].s,max,V[i].ts);
		}
	}
}
