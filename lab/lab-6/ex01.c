#include<stdio.h>
struct student{
    char name[100];
    int age;
    float score;
};
int main(){
    struct student s[3]={
        {"John Smith",20,69.3},
        {"Joe Smith",21,67.3},
        {"Jaokhun Smith",22,70.3}
    };
    printf("Student 1's name: %s\n", s[0].name);
    printf("Student 1's age: %d\n", s[0].age);
    printf("Student 1's score: %.1f\n\n", s[0].score);

    printf("Student 2's name: %s\n", s[1].name);
    printf("Student 2's age: %d\n", s[1].age);
    printf("Student 2's score: %.1f\n\n", s[1].score);

    printf("Student 3's name: %s\n", s[2].name);
    printf("Student 3's age: %d\n", s[2].age);
    printf("Student 3's score: %.1f\n", s[2].score);

    return 0;
}
