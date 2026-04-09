#include<stdio.h>
int main(){
    int a,b,c;
    printf("angle a,b,c:\n",a,b,c);
    scanf("%d%d%d",&a,&b,&c);
    if(a+b+c==180){
        printf("valid triangle\n");
         if(a==b && b==c){
        printf("Equilateral");
    }
    else if (a==b || b==c || c==a)
    {
        printf("Isosceles");
    }
    else {printf("not equal");}
    

    }
      
    else{printf("not valid triangle");
    }
 
    return 0;
}