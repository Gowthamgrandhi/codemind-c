#include<stdio.h>
int main()
{
    int L,N,W,H,i;
    scanf("%d",&L);
    scanf("%d",&N);
    for(i=0;i<N;i++)
    {
        scanf("%d %d",&W,&H);
        if(W<L || H<L)
        {
            printf("UPLOAD ANOTHER
");
        }
        else if(W==H)
        {
            printf("ACCEPTED
");
        }
        else
        {
            printf("CROP IT
");
        }
    }
    
}