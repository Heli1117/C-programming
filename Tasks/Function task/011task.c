#include<stdio.h>
int total(int n){
       if (n<10) return 1 ;
  return 1+ total(n/10);;
   
}
int main(){
   printf("%d\n",total(39847));
    return 0;
}