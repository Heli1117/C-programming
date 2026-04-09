#include <stdio.h>

int main()
{

    int n;

    while (1)
    {
        printf("Enter a number: ");
        scanf("%d", &n);
        

        if (n<0)
        {

            continue;
        }
        printf("number is:%d\n",n);
        if(n==0){
            break;
        }
        
    }
   
    return 0;
}