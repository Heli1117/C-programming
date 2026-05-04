#include<stdio.h>
int main(){
    int a=10;
    int *b;
    b=&a;
    int **c;
    c=&b;
    
    printf("Value of variable a:%d",**c);
    return 0;
}