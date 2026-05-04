#include<stdio.h>
int number(int num){
     int *ptr=&num;
    *ptr=(*ptr)*10;
   
    
}
int main(){
     printf("New value of num=%d\n",number(5));
   
}