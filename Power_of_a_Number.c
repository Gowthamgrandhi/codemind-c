#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,d,e;
    scanf("%d %d %d",&a,&b,&c);
    e=pow(a,b);
    d=e%c;
    printf("%d",d);
}