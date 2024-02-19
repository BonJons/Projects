// Jonathan Schnell
// N01566021
// Assignment 8B


#include <stdio.h>
#include <stdlib.h>

typedef struct Account
{

char name[50];
int accountNumber;
float balance;

}Account;



int main(void) {
int choice;

Account *array;
array = (Account*) malloc(20*sizeof(Account));
  

int accountNumbers = 0;
while (choice != 0)
  {
    

printf("Account Management System\n1. Create Account\n2. Deposit Money\n3. Withdraw Money\n4. Check Balance\n0. Exit\n");

printf("Enter your choice: ");
    scanf("%d", &choice);
    printf("\n");


switch (choice)
  {
int number;
    case 1:

    printf("Enter your name: ");
    scanf("%s",array[accountNumbers].name);
      printf("\n");
    printf("Enter your account number: ");
    scanf("%d", &array[accountNumbers].accountNumber);
      printf("\n");
    printf("Enter your initial deposit: \n");
    scanf("%f", &array[accountNumbers].balance);
    accountNumbers++;
      printf("\n");
    break;

    case 2:

    printf("Enter your account number: ");
    scanf("%d", &number);
      printf("\n");
    for (int i = 0; i <= accountNumbers; i++)
      {
        if (array[i].accountNumber == number)
        {
          float deposit;
          printf("Enter the amount you want to deposit: ");
            scanf("%f", &deposit);
          array[i].balance+=deposit;
          printf("Your account balance is now: $%.2f\n\n", array[i].balance);
          break;
        }
        else if (array[i].accountNumber != number)
        {
          printf("Account number %d not found.\n", number);
        }
      }
    break;

    case 3:

    printf("Enter your account number: ");
    scanf("%d", &number);
      printf("\n");
    for (int ii = 0; ii <= accountNumbers; ii++)
      {
        if (array[ii].accountNumber == number)
        {
          float withdrawl;
          printf("Enter the amount you want to withdraw: \n");
            scanf("%f", &withdrawl);
          array[ii].balance-=withdrawl;
          printf("Your account balance is now: $%.2f\n\n", array[ii].balance);
          break;
        }
        else if (array[ii].accountNumber != number)
        {
          printf("Account number %d not found.\n", number);
        }
      }
    break;

    case 4:
    printf("Enter your account number: \n");
    scanf("%d", &number);
      
    for (int i = 0; i <= accountNumbers; i++)
    {
      if (array[i].accountNumber == number)
      {
        printf("Your account balance is : $%.2f\n\n", array[i].balance);
        break;
      }
      else if (array[i].accountNumber != number)
      {
        printf("Account number %d not found.\n\n", number);
      }
    }

    break;
    

    case 0:
      //printf("Goodbye!");
    break;
    
  }

}



  free(array);
  
  return 0;
}
