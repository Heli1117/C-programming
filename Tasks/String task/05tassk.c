#include<stdio.h>
#include<string.h>
void copy(){
        char str[]="Have a nice day";
        char string[50];
    strcpy(string,str);
    printf("Copy of  string :%s",string);
}
int main(){
copy();
    return 0;
}