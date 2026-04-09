#include<stdio.h>
void compare(int a){
    if(a%2==0){
    printf("even");
    }

else{
printf("odd");
}
}
int main(){
    compare(5);
    return 0;
}