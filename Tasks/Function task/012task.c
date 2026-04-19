#include<stdio.h>
int sum(int N){
    if(N==0)return N;
    return N+sum(N-1);

}
int main(){
    printf("%d\n",sum(10));
    return 0;
}