#include <stdio.h>

struct Student {
    char name[21];
    int id;
    int grades[4];
    float avg;
};
int main() {
    char subjects[4][20] = {"Math", "English", "Science", "History"};
    struct Student s[3] = {
        {"Alice",   1001, {90, 85, 88, 92}, 0},
        {"Bob",     1002, {78, 82, 75, 80}, 0},
        {"Charlie", 1003, {88, 90, 85, 87}, 0}
    };
    float subjectAvg[4] = {0};
    int i, j;
    for (i = 0; i < 3; i++) {
        float total = 0;
        for (j = 0; j < 4; j++) {
            total += s[i].grades[j];
            subjectAvg[j] += s[i].grades[j];
        }
        s[i].avg = total / 4.0;
    }
    int bestStudent = 0;
    if (s[1].avg > s[bestStudent].avg) bestStudent = 1;
    if (s[2].avg > s[bestStudent].avg) bestStudent = 2;
    for (j = 0; j < 4; j++) {
        subjectAvg[j] /= 3.0;
    }
    int bestSubject = 0;
    if (subjectAvg[1] > subjectAvg[bestSubject]) bestSubject = 1;
    if (subjectAvg[2] > subjectAvg[bestSubject]) bestSubject = 2;
    if (subjectAvg[3] > subjectAvg[bestSubject]) bestSubject = 3;
    printf("Student Averages:\n");
    for (i = 0; i < 3; i++) {
        printf("%s (ID: %d): %.2f\n", s[i].name, s[i].id, s[i].avg);
    }
    printf("\nTop Student: %s with %.2f\n",
           s[bestStudent].name, s[bestStudent].avg);
    printf("\nSubject Averages:\n");
    for (j = 0; j < 4; j++) {
        printf("%s: %.2f\n", subjects[j], subjectAvg[j]);
    }
    printf("\nTop Subject: %s with average %.2f\n",
           subjects[bestSubject], subjectAvg[bestSubject]);
}