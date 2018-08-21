#include<stdio.h>

#include<stdlib.h>
int main()
{
char ch;
char s[20];
 char sen[170];
    int i = 0;
    scanf("\n%c",&ch);
    scanf("\n%s",s);
    
    scanf(" %[^\n]s",sen);
       
    printf("%c", ch);
    printf("\n%s", s);
    printf("\n%s", sen);
    return 0;
}



