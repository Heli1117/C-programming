#include<stdio.h>
int main(){
    char str[100],ch;
    int found =0;
    printf("Enter a string:");
    gets(str);
    printf("Enter the character to found:");
    scanf("%c",&ch);
    for (int i = 0; str[i] != '\0'; i++)
    {
        if(str[i]==ch){
            found=1;
            break;
        }
    }
    if (found==1)
    printf("%c is present into the string:",ch);

    else
        printf("%c is not present into the string:",ch);
    
    
    
    return 0;
}