#include<stdio.h>
struct Vector2D{
    float x;
    float y;
};
int main(){
    struct Vector2D v;
    printf("Enter x component:");
    scanf("%f",&v.x);
    printf("Enter y component:");
    scanf("%f",&v.y);
    printf("Vector = (%.2f,%2.f)\n",v.x,v.y);
    return 0;
}