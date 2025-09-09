#include<stdio.h>
int main()
{
    int sum = 0;
    int i;
    int num = 0;
    float avg;
    for(i=1;i<=10;i++){
        printf("%d Enter the number :",i);
        scanf("%d",&num);
        sum = sum + num;
    }
    avg = sum/10;
    printf("total sum is: %d\n",sum);
    printf("Average is: %.2f\n",avg);
    return 0;
}