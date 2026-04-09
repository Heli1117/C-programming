#include<stdio.h>
void compare(int a,int b){
    if(a>b){
    printf("%d",a);
    }

else{
printf("%d",b);
}
}
int main(){
    compare(2,3);
    return 0;
}