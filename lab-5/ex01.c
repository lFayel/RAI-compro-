#include<stdio.h>
int main(){
    int array[10] , value[10];
    for (int i = 0 ; i <10; i++)
    {
        printf("Enter the value %d here :   ",i+1);
        scanf("%d", &array[i]);
    }
    printf("Values in array are:  ");
    for (int arr = 0 ; arr < 10; arr++){
        printf("%d",array[arr]);
    }
    
}