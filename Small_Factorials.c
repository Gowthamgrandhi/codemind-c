#include<stdio.h>
int main()
{
    int t,n,i,j;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d
",&n);
        int f=1;
        for(j=1;j<=n;j++)
        {
            f=f*j;
        }
        printf("%d
",f);
    }
}