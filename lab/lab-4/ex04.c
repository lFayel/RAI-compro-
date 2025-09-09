#include<stdio.h>
int main()
{
    int num;
    int i,ans;
    printf("Enter a number: \n");
    scanf("%d",&num);
    printf("Multiplication Table for %d: \n",num);
    for (int i = 1; i<=12;i++)
    { ans = num*i;
        printf("%d * %d = %d \n",num,i,ans);
    }
}