#include<stdio.h>
int main(){
    int i=1;
    int sum=0;
    int num=0;
    while (i<=10){
        printf("%d.Enter the number: ",i);
        scanf("%d",&num);
        sum = sum + num;
        i++;
    }
    printf("total sum is: %d\n",sum);
}