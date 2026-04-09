#include<stdio.h>
int main(){
    int marks=98;
 if (marks>=60&&marks<=69)
        {
            printf("D");
        }
        else if (marks>=70&&marks<=79)
        {
            printf("c");
        }
        else if (marks>=80&&marks<=89)
        {
            printf("B");
        }
        else if (marks>=90&&marks<=100)
        {
            printf("A");
        }
    
    else{
        printf("Fail");
    }
    
    return 0;
}