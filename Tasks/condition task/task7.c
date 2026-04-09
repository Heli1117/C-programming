#include<stdio.h>
int main(){
    char input;
    
    printf("enter a character:",input);
    scanf("%c",&input);
    if(input=='a'||input=='e'||input=='i'||input=='o'||input=='u'){
        printf("vowel");
    }
    else if (input>='a'&&input<='z')
    {
        printf("constant");
    }
    
    else{
        printf("Invalid input");
    }
    return 0;
}