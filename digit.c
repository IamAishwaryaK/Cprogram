#include <stdio.h>

int main()
{
    int a,b;
    printf("Enter number:");
    scanf("%d",&a);
    while(a>0){
        a=a/10;
        b++;
    }
    printf("%d",b);

    return 0;
}
