#include<stdio.h>
int main()
{
    char name[100];
    int cal,phys,sci;
    float avg
    int main()
    printf("Enter your name: \n");
    scanf("%s",name);
    printf("Enter your Calculus score: \n");
    scanf("%d",&cal);
    printf("Enter your Physic score: \n");
    scanf("%d",&phys);
    printf("Enter your Science score: \n");
    scanf("%d",&sci);
    if (avg < 50 ){
        printf("%s, your average is %.2f. You got grade F.",name,avg);
    }
    else if (avg>= 50&&avg<60){
        printf("%s, your average is %.2f. You got grade D.",name,avg);
    }
    else if (avg>=60&&avg<70){
        printf("%s, your average is %.2f. You got grade C.",name,avg);
    }
    else if (avg>=70&&avg<80){
        printf("%s, your average is %.2f. You got grade B.",name,avg);
    }
    else if (avg>=80){
        printf("%s, your average is %.2f. You got grade A.",name,avg);
    }
}