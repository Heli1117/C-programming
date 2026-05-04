#include<stdio.h>
int main(){
    char str[100],ch;
int count =0;
    printf("Enter a string:");
    gets(str);
    printf("Enter character to count:");
    scanf("%c",&ch);
    for (int i = 0; str[i] != '\0'; i++)
    {
        if(str[i]==ch){
            count++;
        }
    }
    printf("'%c'appears %d time(s\n)",ch,count);
    

    return 0;
}