#include<stdio.h>
int main(){
    int units,bill;
    printf("Enter units:");
    scanf("%d",&units);
    if(units<=100){
        bill=units*5;
        printf("Bill:%d",bill);
    }
    else if (units>=101 && units<=300)
    {
        bill=units*7;
        printf("Bill:%d",bill);
    }
    else {
        bill=units*10;
        printf("Bill:%d",bill);  
    }
    if (bill>=1000)
    {
        bill=bill+ bill*0.05;
        printf("Bill with surcharge:%d",bill);
    }
    
    
    
    return 0;
}