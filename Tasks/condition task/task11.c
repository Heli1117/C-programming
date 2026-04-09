#include<stdio.h>
int main(){
    int income;
    float tax;
    printf("Enter income:");
    scanf("%d",&income);
    if(income>=250000&&income<=500000){
        tax=income*0.05;
        printf("tax:%f",tax);
    }
        else if (income>=500000&&income<=1000000)
        {
            tax=income*0.2;
            printf("tax:%f",tax);
        }
        else if (income>1000000)
        {
            tax=income*0.3;
            printf("tax:%f",tax);
        }
        else
        {
            printf("no tax");
        }
        
    
    return 0;
}