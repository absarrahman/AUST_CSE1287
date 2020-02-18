#include<stdio.h>

int main(){
    int roll;
    char name[100];
    double marks,sum=0,avg=0;
    printf("Enter your roll\n");
    scanf("%d",&roll);
    fgets(name, 100, stdin);
    printf("Enter your name\n");
    fgets(name, 100, stdin);
    printf("Enter your marks of 5 subjects\n");
    for(int i=1;i<=5;i++){
        scanf("%lf",&marks);
        sum+=marks;
    }
    avg=sum/5;
    printf("Your roll is %d\nYour name is %sYour total marks is %.2lf\nYour average marks is %.2lf",roll,name,sum,avg);
    return 0;
}
