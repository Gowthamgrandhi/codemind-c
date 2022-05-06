#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i,arr[n],ep=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(i%2==0)
        {
            ep+=arr[i];
        }
    }
    printf("%d",ep);
}