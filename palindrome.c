#include<stdio.h>
int main(){
    int num,temp,a,b;
    printf("Enter the number:");
    scanf("%d",num);
    num=temp;
    while(num>0){
        a=num%10;
        b=b+a*10;
        num=num/10;
        
        
    }
    if(b==temp){
        printf("yes");
    }
    else{
        printf("no");
    }
    return 0;
}
