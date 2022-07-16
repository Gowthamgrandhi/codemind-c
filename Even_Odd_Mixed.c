#include<stdio.h>
int main()
{
    int n,r,c1=0,c2=0;
    scanf("%d",&n);
    while(n!=0)
    {
        r=n%10;
        if(r%2==0)
        {
            c1+=1;
        }
        else
        {
            c2+=1;
        }
        n=n/10;
    }
    if(c1>=1 && c2>=1)
    {
        printf("Mixed");
    }
    else if(c1>1 && c2==0)
    {
        printf("Even");
    }
    else
    {
        printf("Odd");
    }
}