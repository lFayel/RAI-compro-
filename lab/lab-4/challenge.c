#include <stdio.h>
   int main (){
    int choice =0 , depo , with ;
    int balance = 0 ;
 while (choice!=4)
 {
        printf("====== ATM MENU ======\n");
        printf("1. Check Balance\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Exit\n");
        scanf("%d",&choice);
      if (choice==1)
     {
       printf("Choose an option: %d\n",choice);
        printf("Current Balance: %d\n",balance);
     }
     if (choice==2)
      {
        printf("Choose an option: %d\n",choice);
        printf("Enter amount to deposit: ");
        scanf("%d",&depo);
        balance = balance + depo ;
     }
     if (choice==3)
     {
    printf("Choose an option: %d\n",choice);
    printf("Enter amount to withdraw: ");
    scanf("%d", &with);
     if (balance < with)
        {
         printf("you dont have enought money to withdraw\n");
        }
     if (balance >= with)
    {
        balance = balance - with;
        printf("Withdraw successful.\n");
    }

         }



}
printf("Choose an option: %d\n",choice);
printf("Thank you for using the ATM.\n");

}