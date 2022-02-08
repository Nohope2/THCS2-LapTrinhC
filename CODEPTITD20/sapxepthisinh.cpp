#include<stdio.h>
struct Product {
	int id;
	char name[100], old[100];
    double d1,d2,d3,dtb;
};
void inPut(struct Product sp[], int i) {
	fflush(stdin);
	sp[i].id=i+1;
	scanf("\n%[^\n]s", sp[i].name);
	scanf("\n%[^\n]s", sp[i].old);
	scanf("%lf %lf %lf", &sp[i].d1, &sp[i].d2,&sp[i].d3);
	sp[i].dtb=(sp[i].d1+sp[i].d2+sp[i].d3);
}
void sort(struct Product sp[], int n) {
    for(int i=0; i<n-1; i++) {
        for(int j=i+1; j<n; j++) {
            if(sp[j].dtb>sp[i].dtb) {
                struct Product temp=sp[i];
                sp[i]=sp[j];
                sp[j]=temp;
            }
        }
    }
}
void outPut(struct Product sp[], int n) {
    for(int i=0; i<n; i++) printf("%d %s %s %.1lf\n", sp[i].id, sp[i].name, sp[i].old, sp[i].dtb);
}
int main() {
	int n; scanf("%d", &n);
	struct Product sp[n];
	for(int i=0; i<n; i++) inPut(sp,i);
	sort(sp,n);
    outPut(sp,n);
    return 0;
}
