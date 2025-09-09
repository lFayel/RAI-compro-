#include<stdio.h>
int x;
float y;
char z;
int main()
{ 
    printf("Please enter an interger value :");
    scanf("%d",&x);
    printf("You entered %d \n",x);
    printf("Please enter a float value:");
    scanf(" %f",&y);
    printf("You entered %.2f\n",y);
    printf("Please enter a character:");
    scanf(" %c", &z);
    printf("You enter %c", z);
    
    return 0;
}