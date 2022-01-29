#include<stdio.h>
int main()
{
    int n,scales[10],i,j,min=9999,hcf=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&scales[i]);
    }
    for(i=0;i<n;i++)
    {
        if(min>scales[i])
          min=scales[i];
    }
    for(i=min;i>=1;i--)
    {   
        hcf=0;
        for(j=0;j<n;j++)
        {
            if(scales[j]%i!=0)
            {
                hcf=1;
                break;
            }
        }
        if(hcf==0)
        {
            printf("%d",i);
            break;
        }
    }
    return 0;
}