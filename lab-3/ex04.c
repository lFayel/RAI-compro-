#include<stdio.h>
int main()
{
    char name[100];
    int cal,phys,sci;
    float avg;
    printf("Enter your name: \n");
    scanf("%s",name);
    printf("Enter your Calculus score: ");
    scanf("%d",&cal);
    printf("Enter your Physic score: ");
    scanf("%d",&phys);
    printf("Enter your Science score: ");
    scanf("%d",&sci);
    avg = (cal+phys+sci)/3;

    if (avg < 50 )
    {
        printf("%s, your average is %.2f. You got grade F.\n",name,avg);
    }
    else if (avg>= 50&&avg<60)
    {
        printf("%s, your average is %.2f. You got grade D.\n",name,avg);
    }
    else if (avg>=60&&avg<70)
    {
        printf("%s, your average is %.2f. You got grade C.\n",name,avg);
    }
    else if (avg>=70&&avg<80)
    {
        printf("%s, your average is %.2f. You got grade B.\n",name,avg);
    }
    else if (avg>=80)
    {
        printf("%s, your average is %.2f. You got grade A.\n",name,avg);
    }
}