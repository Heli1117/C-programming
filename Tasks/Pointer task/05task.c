#include<stdio.h>
int calculate(int *a, int *b, int *sum,int *avg){
    *sum=*a+*b;
    
    *avg=*sum/2;

    
   

}
int main(){

    

     int num1=10;
     int num2=20;
     int sum;
     int avg;
     calculate(&num1,&num2,&sum,&avg);
     printf("Avg of num:%d\n",avg);
     printf("Sum of num:%d\n",sum);

    return 0;
}