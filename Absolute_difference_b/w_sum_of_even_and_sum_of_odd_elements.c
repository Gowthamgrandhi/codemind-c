#include<stdio.h>
#include<math.h>
int main()
{
    int n,c;
    scanf("%d",&n);
    int arr[n],i,es=0,os=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
            es+=arr[i];
        }
        if(arr[i]%2!=0)
        {
            os+=arr[i];
        }
    }
    c=os-es;
    printf("%d",abs(c));
}