#include<stdio.h>
void morning(){
    printf("Good Morning");
}
void afternoon(){
    printf("Good after noon");
}
void evening(){
    printf("Good evening");
}
void _Greeting(){
    printf("Whole day greetings\n");
    morning();
    printf("\n");
    afternoon();
    printf("\n");
    evening();
}
int main(){
    _Greeting();
    return 0;
}