#include<stdio.h>
struct BankAccount{
int accountNumber;
char name[50];
char accountType[20];
float balance;
};
void displyAccount(struct BankAccount acc){
    printf("\n---Account Details---\n");
    printf("Account Number :%d\n",acc.accountNumber);
    printf("Account Holder :%s\n",acc.name);
    printf("Account Type :%s\n",acc.accountType);
    printf("Balance :Rs,%.2f\n",acc.balance);
}
int main(){
struct BankAccount acc;
printf("Enter Account Number:");
scanf("%d",&acc.accountNumber);
printf("Enter Account Holder Name:");
gets(acc.name);
printf("Enter Account Type(Savings/Current):");
gets(acc.accountType);
printf("Enter Balance:");
scanf("%f",&acc.balance);
displyAccount(acc);

    return 0;
}