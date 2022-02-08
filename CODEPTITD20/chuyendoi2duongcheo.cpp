#include<stdio.h>
int main()
{
    int n,i,j,a[55][55]={};
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)  scanf("%d",&a[i][j]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(j==i)  printf("%d ",a[i][n-1-i]);
            else if(j==n-1-i) printf("%d ",a[i][i]);
            else printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}
