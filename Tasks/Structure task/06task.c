#include<stdio.h>
struct Complex{
    float real;
    float img;
};
void displayComplex(struct Complex c){
    if (c.img>=0)
    {
        printf("%.2f + %.2fi\n",c.real,c.img);
    }else{
        printf("%.2f %.2fi\n",c.real,c.img);
    }
    
}
int main(){
    struct Complex arr[5];
    int i;
    for(i=0;i<5;i++){
        printf("\nEnter Complex Nomber %d:\n,i+1");
        printf("  Real part:");
        scanf("%f",&arr[i].real);
        printf(" Imaginary part:");
        scanf("%f",&arr[i].img);
    }
    printf("\n --All complex Numbers--");
    for ( i = 0; i < 5; i++)
    {
        printf("C%d = ",i+1);
        displayComplex(arr[i]);
    }
    return 0;
    
}