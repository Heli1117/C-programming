#include<stdio.h>
struct vector
{
    float x;
    float y;
};
struct vector sumvector(struct vector a,struct vector b){
    struct vector result;
    result.x =a.x + b.x;
    result.y =a.y + b.y;
    return result;
}

int main(){
    struct vector v1,v2,sum;
    printf("Enter X and Y for vector 1:");
    scanf("%f %f",&v1.x,&v1.y);
    printf("Eneter X and Y for vector 2:");
    scanf("%f %f",&v2.x,&v2.y);
    sum = sumvector(v1,v2);
    printf("Sum Vector =(%.2f,%2.f)\n",sum.x,sum.y);
    
    return 0;
}