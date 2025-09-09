#include<stdio.h>
int main()
{
    char name[50];
    int age;
    float height, weight;
    char gender;
    char edu[100];

    printf("Enter your name: ");
    scanf("%s", name);
    printf("Enter your age: ");
    scanf("%d",&age);
    printf("Enteryour height:");
    scanf("%f",&height);
    printf("Enter your weight:");
    scanf("%f",&weight);
    printf("Enter your gender:");
    scanf("%c",&gender);
    printf("Enter your edu:");
    scanf("%c",edu);

    printf("\nName: %s\tAge: %dtGender: %c\n", name, age, gender);
    printf("Height: %.1f\tWeight: %.1f\n", height, weight);
    printf("edu: %s\n", edu);

    return 0;
}