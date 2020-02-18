#include<stdio.h>

int main(){
    int number;
    printf("Enter number\n");
    scanf("%d",&number);
    printf("Square of %d is %d\n",number,(int)pow(number,2));
    return 0;
}
