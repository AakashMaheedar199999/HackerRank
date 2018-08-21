#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	    int n1,n2,isum=0,idiff=0;
    float n3,n4,fsum=0,fdiff=0;
    scanf("%d %d",&n1,&n2);
    scanf("%f %f",&n3,&n4);
    isum=n1+n2;
    idiff=n1-n2;
    printf("%d %d",isum,idiff);
    printf("\n");
    
    fsum=n3+n4;
    fdiff=n3-n4;
    printf("%.1f %.1f",fsum,fdiff);
    return 0;
    
   
}
