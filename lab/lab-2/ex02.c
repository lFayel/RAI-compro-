#include<stdio.h>
char x[10]="ILOVEPHOOM";
int y =9;
int main()
{
    while (y>-1)
    {
        printf ("%c\n",x[y]);
        y--;
    }
}