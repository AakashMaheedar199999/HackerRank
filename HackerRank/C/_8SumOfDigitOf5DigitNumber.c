#include<stdio.h>
int main( )
{
    int x,r,sum=0;
    scanf("%d",&x);
    while(x>0)
    {
        r=x%10;
        sum+=r;
        x/=10;
    }
    printf("%d",sum);
    return 0;
}