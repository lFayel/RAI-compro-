#include<stdio.h>
int main()
{
    int num1,num2,choice,result;
    printf("Enter Num1: ");
    scanf("%d",&num1);
    printf("Enter Num2: ");
    scanf("%d",&num2);

    printf("Calculator Menu : \n");
    printf("1. +\n");
    printf("2. -\n");
    printf("3. *\n");
    printf("4. /\n");

    printf("Chose menu:");
    scanf("%d",&choice);

    if (choice == 1) {
        result = num1 + num2;
        printf("Ans: num1 + num2 = %d\n",result);
    } else if (choice == 2) {
        result = num1 - num2;
        printf("Ans: num1 - num2 = %d\n",result);
    } else if (choice == 3) {
        result = num1 * num2;
        printf("Ans: num1 * num2 = %d\n",result);
    } else if (choice == 4) {
        result = num1 / num2;
        printf("Ans: num1 / num2 = %d\n",result);
    }
}

