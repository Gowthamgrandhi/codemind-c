#include<stdio.h>
int main()
{
    int a,b,c,i;
    scanf("%d %d",&a,&b);
    if(a>b)
    {
        c=a;
    }
    else
    {
        c=b;
    }
    for(i=1;i<=c;i++)
    {
        if(i%a==0 && i%b==0)
        {
            printf("%d",i);
            break;
        }
        ++c;
    }
}