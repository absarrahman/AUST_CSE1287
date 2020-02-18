#include<stdio.h>

int main(){
    int roll;
    char name[100],phone[100];
    double marks;
    printf("Enter your roll\n");
    scanf("%d",&roll);
    fgets(name, 100, stdin);
    printf("Enter your name\n");
    fgets(name, 100, stdin);
    printf("Enter your marks\n");
    scanf("%lf",&marks);
    printf("Enter your phone\n");
    scanf("%s",&phone);
    printf("Your roll is %d\nYour name is %sYour marks is %.2lf\nYour phone number is %s",roll,name,marks,phone);
    return 0;
}
