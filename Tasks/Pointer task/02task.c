#include<stdio.h>
int address(int i){
    printf("\nAddress of functional i:%d\n",&i);


}
int main(){
    int i;
    
    printf("\nAddress of i:%d",&i);
    address(80);
    
    
    
    return 0;
}