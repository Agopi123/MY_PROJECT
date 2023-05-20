#include <stdio.h>
int main()
{
    int n,i=0,binary[5],j;
    printf("enter n value :");
    scanf("%d",&n);                  //10
    while(n>0)
    {
        binary[i]=n%2;
        n=n/2;
        i++;
    }
    for(j=i-1;j>=0;j--)
    {
        printf("%d",binary[j]);      //1010
    }
    return 0;
}

