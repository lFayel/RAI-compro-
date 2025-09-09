#include<stdio.h>
int main()
{
    int num;
    int i;
    int ans = 1;
    printf("Enter a number:");
    scanf("%d",&num);
    for (int i = 1; i <= num ;i++)
    {
        ans = ans*i;//1x2
        //2
        //printf("%d * %d = %d\n"num,i,ans);
    }

    printf("Factorial of %d is ",ans);
}