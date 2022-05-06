#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i,arr[n],osum=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]%2!=0)
        {
            osum+=arr[i];
        }
    }
    printf("%d",osum);
}