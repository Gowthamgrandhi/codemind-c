#include<stdio.h>
int main()
{
    int n,i,sum=0,m;
    scanf("%d",&n);
    m=n;
    for(i=1;i<n;i++)
    {
        if(n%i==0)
        {
            sum=sum+i;
        }
    }
    if(sum>n)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}