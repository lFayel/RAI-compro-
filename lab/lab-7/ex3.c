#include<stdio.h>
int main(){
    int array[] = { 3, 1, 2, 4, 5, 6 };
    int *ptr = array;
    int i;
    int max;
    int val;
    for(i=0;i<6;i++)
    {
        ptr = &array[i];
        max = *ptr;
        if (max > val)
        {
            val == max;
        }
    }
    printf("Max value: %d",max);
}