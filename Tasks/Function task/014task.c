#include<stdio.h>
int gcd(int a,int b){
    if(b==0) return a;
    return gcd(b,a%b);
}
int main(){
    int a=4,b=6;
    int lcd=(a*b)/gcd(a,b);
    printf("LCD =%d",lcd);
    return 0;
}