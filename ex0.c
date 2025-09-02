#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int space = n/2; // 8

    for (int i = 1; i<=n; i+=2){
        for (int j = 0; j<space; j++){
            printf(" ");
        }
        for (int k = 0; k<i; k++){
            printf("*");
        }
        printf("\n");
        space -= 1;
    }
}