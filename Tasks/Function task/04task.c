#include<stdio.h>
#include <stdio.h>

int isPalindrome(int num);

int isPalindrome(int num) {
    int original = num;
    int reverse = 0;

    while(num != 0) {
        int digit = num % 10;
        reverse = reverse * 10 + digit;
        num = num / 10;
    }

    if(original == reverse) {
        return printf("The number is a palindrome.\n");
    } else {
        return printf("The number is not a palindrome.\n");
    }
}

int main() {
    isPalindrome(1231);
    return 0;
}

