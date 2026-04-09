#include<stdio.h>
int main(){
    int sub1,sub2,sub3,persentage,total_marks;
    total_marks=300;
    persentage=(sub1+sub2+sub3)*100/300;
    printf("enter marks of three subjects:\n");
    scanf("%d%d%d",&sub1,&sub2,&sub3);
    if(sub1,sub2,sub3>=33 && persentage>=40){
        printf("pass");
    }
    else{
        printf("fail");
    }
    
    return 0;
}