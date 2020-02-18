#include<stdio.h>

int main(){
    int number;
    printf("Enter number\n");
    scanf("%d",&number);
    if(number&1){
        printf("Odd\n");
    } else {
        printf("Even\n");
    }
    return 0;
}
