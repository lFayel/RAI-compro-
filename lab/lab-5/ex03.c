#include<stdio.h>
int main(){
    int tol[5],sum,max,i;
    for (int i = 0; i<5;i++){
        printf("Enter the marks of student %d: ",i+1);
        scanf("%d",&tol[i]);
        sum = sum+tol[i];
    }
    max = tol[i];
    for (int j=1;j<=5;j++)
    {
        if (tol[i]>max)
        {
            max = tol[i];
        }
    }
    printf("Total Marks:%d\n",sum);
    printf("Highest marks: %d\n",max);
    return 0;
    



}