#include<stdio.h>
int main(){
    int year;
    printf("Enter a year:",year);
    scanf("%d",&year);
    if(year%4==0&&year%100==0||year%400==0){
        printf("Its leap year");
    }
    else{
        printf("not leap year");
    }
    return 0;
}