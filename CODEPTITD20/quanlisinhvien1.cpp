#include<stdio.h>
#include<string.h>
struct sinhvien{
	int msv;
	char s[100];
	double a;
	double b;
	double c;
	double tb;
};
int main()
{
	struct sinhvien V[500];
	int n;
	while ( 1 ){
		scanf("%d",&n);
		int sl;
		if ( n == 1 ){
			scanf("%d",&sl);
			for ( int i = 0 ; i < sl ; i++ ){
				fflush(stdin);
				V[i].msv = i + 1;
				scanf("\n%[^\n]s",&V[i].s);
				scanf("%lf",&V[i].a);
				scanf("%lf",&V[i].b);
				scanf("%lf",&V[i].c);
				V[i].tb = (V[i].a + V[i].b + V[i].c)/3;
			}
			printf("%d\n",sl);
		}
		if ( n == 2 ){
			int m;
			scanf("%d",&m);
			char tmp[1000];
			scanf("\n%[^\n]s",&tmp);
			double x,y,z;
			scanf("%lf",&x);
			scanf("%lf",&y);
			scanf("%lf",&z);
			char cpy[500];
			strcpy(cpy,V[m-1].s);
			strcpy(V[m-1].s, tmp);
			strcpy(tmp,cpy);
			V[m-1].a = x;
			V[m-1].b = y;
			V[m-1].c = z;
			V[m-1].tb = (V[m-1].a + V[m-1].b + V[m-1].c)/3;
			printf("%d\n",m);
		}
		if ( n == 3 ){
			for ( int i = 0 ; i < sl - 1 ; i++ ){
				for ( int j = 1 ; j < sl ; j++ ){
					if ( V[j-1].tb > V[j].tb ){
						struct sinhvien tmp;
						tmp = V[j-1];
						V[j-1] = V[j];
						V[j] = tmp;
					}
				}
			}
			for ( int i = 0 ; i < sl ; i++ ){
				printf("%d ",V[i].msv);
				printf("%s ",V[i].s );
				printf("%.1lf %.1lf %.1lf\n",V[i].a, V[i].b , V[i].c );
			}
			break;
		}
	}
}
