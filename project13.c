#include<stdio.h>
#include<conio.h>
int main(){
    clrscr();
    int i=1;
    label:
    if(i%3!=0) printf("%d",i);
    i++;
    if(i<=7) goto label;
    getch();
    return 0;
}