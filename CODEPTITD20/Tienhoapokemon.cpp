#include<stdio.h>
struct Product {
	char name[100];
    int soviencan;
    int sovienco;
    int max;
};
void inPut(struct Product sp[], int i) {
	fflush(stdin);
	scanf("\n%[^\n]s", sp[i].name);
	scanf("%d %d", &sp[i].soviencan, &sp[i].sovienco);
}
void sort(struct Product sp[], int n){
	int maxnum=0;
	for(int i=0;i<n;i++)
	{
		int dem=0;
		int d=sp[i].sovienco;
		int c=sp[i].soviencan;
		while(d>=c)
		{
			int k=d/c;
			dem+=k;
			d=k*2+d%c;
		}
		maxnum+=dem;
		sp[i].max=dem;
	}
	for(int i=0; i<n-1; i++) {
        for(int j=i+1; j<n; j++) {
            if(sp[j].max>sp[i].max) {
                struct Product temp=sp[i];
                sp[i]=sp[j];
                sp[j]=temp;
            }
        }
    }
    printf("%d\n%s",maxnum,sp[0].name);
}
int main() {
	int n; scanf("%d", &n);
	struct Product sp[n];
	for(int i=0; i<n; i++) inPut(sp,i);
	sort(sp,n);
    return 0;
}
