#include<stdio.h>
#include<string.h>
struct SinhVien{
	int id;
	char name[500];
    double d1,d2,d3,dtb;
};
void Nhap(struct SinhVien dssv[],int i) {
	fflush(stdin);
	dssv[i].id=i+1;
	scanf("\n%[^\n]s", dssv[i].name);
	scanf("%lf %lf %lf", &dssv[i].d1, &dssv[i].d2,&dssv[i].d3);
	dssv[i].dtb=(dssv[i].d1+dssv[i].d2+dssv[i].d3)/3;
}
void sort(struct SinhVien dssv[], int soluong) {
    for(int i=0; i<soluong-1; i++) {
        for(int j=1; j<soluong; j++) {
            if(dssv[j].dtb<dssv[j-1].dtb) {
                struct SinhVien temp=dssv[j];
                dssv[j]=dssv[j-1];
                dssv[j-1]=temp;
            }
        }
    }
}
void outPut(struct SinhVien dssv[], int n) {
    printf("%d %s %.1lf %.1lf %.1lf\n", dssv[0].id, dssv[0].name,dssv[0].d1,dssv[0].d2,dssv[0].d3);
    for(int i=1; i<n; i++) 
    if(dssv[i].dtb==dssv[0].dtb) printf("%d %s %.1lf %.1lf %.1lf\n", dssv[i].id, dssv[i].name,dssv[i].d1,dssv[i].d2,dssv[i].d3);
}
int main() {
	int n; 
	struct SinhVien dssv[1000];
	   while(1)
	   {
	   	    int soluong;
		   	scanf("%d", &n);
		   	if(n==1)
		   	{
		    		scanf("%d",&soluong);
		    		for(int i=0;i<soluong;i++) Nhap(dssv,i);
		    		printf("%d\n",soluong);
			}
			if(n==2)
			{
				int ma;
				scanf("%d",&ma);
				char MSV[500];
				scanf("\n%[^\n]s",&MSV);
				double x,y,z;
				scanf("%lf %lf %lf",&x,&y,&z);
				char cpy[500];
				strcpy(cpy,dssv[ma-1].name);
				strcpy(dssv[ma-1].name,MSV);
				strcpy(MSV,cpy);
				dssv[ma-1].d1=x;
				dssv[ma-1].d2=y;
				dssv[ma-1].d3=z;
				dssv[ma-1].dtb=(dssv[ma-1].d1+dssv[ma-1].d2+dssv[ma-1].d3)/3;
				printf("%d\n",ma);
			}
			if(n==3)
			{
				sort(dssv,soluong);
				outPut(dssv,soluong);
				break;
			}
		    	    
	   }
    return 0;
}
