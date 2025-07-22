#include<stdio.h>
int main()
{
    float length, Resisitivity, val,radius,area;
    //int area
    printf("Enter the radius of Resistor (m): ");
    scanf("%f",&radius);
    printf("Enter the length of Resistor (m): ");
    scanf("%f",&length);
    printf("Enter the Resisitivity of Resistor : ");
    scanf("%f",&Resisitivity);
    area = 3.14*radius*radius;
    val = Resisitivity*length/area;
    printf("The val of this resistor : %.2f", val);
    // scanf("%f",val);
}