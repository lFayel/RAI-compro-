#include<stdio.h>
int main()
{
    int h,r;
    float cv,pi;

    pi = 3.14;
    printf("Enter cone height: ");
    scanf("%d",&h);
    printf("Enter cone base radius: ");
    scanf("%d",&r);

    cv = (pi * r * r * h) / 3;

    printf("Cone volume =: %.2f cm^3\n",cv);

    if (cv>260){
        printf("This cone is perfect for Supun project\n");
    }
    else {
        printf("This cone is not fit for this project\n");
    }
}