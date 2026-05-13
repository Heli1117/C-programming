#include<stdio.h>
 typedef struct 
{
    float real;
    float img;
} Complex;
void displyComplex(Complex c){
 if (c.img>=0){
    
        printf("Complex number =%.2f+%.2fi\n",c.real,c.img);
        }else{
        printf("Complex number =%.2f %.2fi\n",c.real,c.img);
        }
    
}

int main(){
     Complex c;
    printf("Enter real part:");
    scanf("%f",&c.real);
    printf("Enter imaginary part:");
    scanf("%f",&c.img);
   
    
    return 0;
}