#include<stdio.h>
int value_by_reference(int *a){
    printf("Value of a:%d",*a);
}
int main(){
    int x=10;
    value_by_reference(&x);
    return 0;
}