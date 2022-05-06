#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i,arr[n],esum=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
            esum+=arr[i];
        }
    }
    printf("%d",esum);
}