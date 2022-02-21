#include<stdio.h>
int main()
{
    int L,B,W,C,area,Tot_Cost,p;
    scanf("%d%d%d%d",&L,&B,&W,&C);
    
        p=(L+(2*W))*(B+(2*W));
        area=L*B;
        Tot_Cost=(p-area)*C;
        printf("%d",Tot_Cost);
    return 0;
}