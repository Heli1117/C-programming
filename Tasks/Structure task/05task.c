#include<stdio.h>
struct  Complex
{
    float real;
    float img;
};

int main(){
    struct Complex c;
    printf("Enter real part:");
    scanf("%f",&c.real);
    printf("Enter imaginary part:");
    scanf("%f",&c.img);
    if (c.img>=0)
    
        printf("Complex number =%.2f+%.2fi\n",c.real,c.img);
        else
        printf("Complex number =%.2f %.2fi\n",c.real,c.img);
    
    
    return 0;
}