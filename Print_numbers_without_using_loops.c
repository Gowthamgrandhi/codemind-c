#include<stdio.h>
int main()
{
    int n,c=1;
    scanf("%d",&n);
    if(n<=0 || n>10000)
    {
        printf("The Number Series is Not Possible Print");
    }
    else
    {
        print:
        printf("%d ",c);
        c++;
        if(c<=n)
        {
            goto print;
        }
    }
}