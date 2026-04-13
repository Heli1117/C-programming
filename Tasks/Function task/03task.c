#include<stdio.h>
void primes(){
    for (int i=2;i<=100;i++){
        int isPrime=1;
        for(int j=2;j<i;j++)
        if(i%j == 0){
            isPrime=0;
            break;
        }
        if(isPrime)printf("%d\n",i);
    }
}
int main(){
    primes();

    return 0;
}