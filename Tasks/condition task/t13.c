#include<stdio.h>
int main(){
    int salary,years,bonus;
    printf("Enter salary:");
    scanf("%d",&salary);
    printf("Enter years:");
    scanf("%d",&years);
    if(years>10){
        bonus=salary*0.1;
        printf("Bonus:%d",bonus);

    }
    else if (years>5)
    {
        bonus=salary*0.05;
        printf("Bonus:%d",bonus);
    }
    else{
        bonus=salary*0.02;
        printf("Bonus:%d",bonus);
    }
    
    return 0;
}