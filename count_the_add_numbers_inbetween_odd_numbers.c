#include<stdio.h>
int main()
{
    int n,i,arr[100],count=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
     for(i=0;i<n;i++)
     {
         if (arr[i]%2!=0 && arr[i+2]%2!=0)
         {
             if(arr[i+1]%2!=0)
             {
                 count++;
             }
             else
             {
                 count=count+0;
             }
         }
            
     }
     printf("%d",count);
}