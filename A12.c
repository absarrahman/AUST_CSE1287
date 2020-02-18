#include<stdio.h>

int main(){
    int number;
    printf("Enter number\n");
    scanf("%d",&number);
    if(number>=40)
        printf("Pass\n");
    else
        printf("Fail\n");
    return 0;
}
