#include <stdio.h>
#include<string.h>
struct employee
{
    int emp_code;
    char emp_name[20];
    float emp_salary;
};

int main() {
    
    
    for (int i = 0; i < 7; i++)
    {
        struct employee facebook[i];
        {
            printf("Enter employee code:");
            scanf("%d",&facebook->emp_code);
            printf("Enter employee name:");
            scanf("%s",facebook->emp_name);
           
            printf("Enter employee salary:");
            scanf("%d",&facebook->emp_salary);
        };
        
    }
    

   
    

    return 0;
}