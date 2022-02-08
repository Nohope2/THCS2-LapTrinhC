#include<stdio.h>
int main()
{
    int n ;
    scanf("%d",&n);
    int k=0,x=1;
    for(int i=0;i<n;i++)
    {
        for(int l=0;l<=k;l++) printf("0 ");
        for(int l=k+1;l<n;l++)
        {
           printf("%d ",x);
           x++;
        }
        x=1;k++;printf("\n");
    }
    return 0;
}
