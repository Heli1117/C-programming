#include<stdio.h>
int main(){
    int a=10;
    printf("Address of variable is:%d\n",&a);
    printf("Value of variable is:%d",*(&a));
    return 0;
}