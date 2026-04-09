#include<stdio.h>
int main(){
    int s1,s2,s3,total;
    total=s1+s2+s3;
    printf("enter marks of s1:");
    scanf("%d",&s1);
    printf("enter marks of s2:");
    scanf("%d",&s2);
    printf("enter marks of s3:");
    scanf("%d",&s3);
    if(s1>=50&&s2>=50){
        if (total>=150)
        {
            printf("Eligible");
            if (total>=200)
    {
        printf("Admission granted automaticaly");
    }
            
        }
        
    }
    else{
        printf("not eligible");
    }

    
    
    return 0;
}