#include <stdio.h>
#include <math.h>
int main()
{                                        
    int dec=0,b,i,rem;
    printf("enter binary value: ");
    scanf("%d",&b);                  // 11111111
    i=0;
    while(b>0)
    {   
        rem=b%10;
        b=b/10;
        dec=dec+rem*pow(2,i);
        i++;
    }       
    printf("%d",dec);                // 255
    return 0;
}

