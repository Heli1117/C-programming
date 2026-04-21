#include <stdio.h>
int tribo(int n) {
     if (n == 0) return 0;
     else if (n==1||n==2) return 1;
     else
    
     
return tribo(n-1) + tribo(n-2) + tribo(n-3);
}
int main()
 {
     printf("%d\n", tribo(7));
     return 0;
     }
