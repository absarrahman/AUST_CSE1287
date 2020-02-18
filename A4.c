#include<stdio.h>

int main(){
    int number;
    printf("Enter number\n");
    scanf("%d",&number);
    printf("Cube of %d is %d\n",number,(int)pow(number,3));
    return 0;
}
