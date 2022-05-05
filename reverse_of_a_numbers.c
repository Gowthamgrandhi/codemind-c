#include<stdio.h>
int main()
{
    int n,i=1,r;
    scanf("%d",&n);
    while(n>0)
    {
        r=n%10;
        printf("%d",r);
        n=n/10;
        i++;
    }
    return 0;
}