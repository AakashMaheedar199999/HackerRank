#include <stdio.h>

int max_of_four(int a,int b,int c,int d)
{
    int g1,g2,g3;
    g1=(a>b)?a:b;
    g2=(g1>c)?g1:c;
    g3=(g2>d)?g2:d;
    return g3;
}


int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}