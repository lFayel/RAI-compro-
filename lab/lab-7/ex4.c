#include<stdio.h>
int main(){
    int i;
    int array[]= { 3, 1, 2, 4, 5, 6 };
    int *ptr = array;
    for (i=0;i<6;i++){
        ptr = &array[i];
        printf("%d\n",*ptr);
        
    }
}