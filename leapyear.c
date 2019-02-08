#include<stdio.h>
int main(){
    int year;
    printf("Enter year:\n");
    scanf("%d",&year);
    if(year%4==0){
        printf("yes");
        
    }
    else{
        printf("no");
    }
    return 0;
}
