#include<stdio.h>

int main()
{
    int d;
    printf("Enter the number:  ");
    scanf("%d",&d);
    if (d>=1&&d<=100)
    {
            //printf("%d\n",d%2);
            if (d%2 != 0)
            {
                printf("The number is odd\n");
            }
            else
            {
                printf("The number is even\n");
            }
        }
        
    else 
    {
        printf("%d is out of range\n", d);
    }    
}