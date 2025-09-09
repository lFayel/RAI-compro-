#include<stdio.h>
int main(){
    int a = 0;
	int b = 5;
    int *apt = &a;
    int *bpt = &b;
    printf("Before reverse: a = %d, b = %d\n", a,b);
    int swap;
    swap = *apt;
    *apt = *bpt;
    *bpt = swap;
    printf("Ater reverse: a = %d, b = %d\n",a,b);
}