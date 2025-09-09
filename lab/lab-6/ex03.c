#include<stdio.h>
#include <math.h>

struct Point{
    float x, y;
};
int main(){
    struct Point p1 = {2.3, 1.5};
    struct Point p2 = {0.0, 4.0};
    float distance = sqrt((p2.x - p1.x)*(p2.x - p1.x) +(p2.y - p1.y)*(p2.y - p1.y));
    printf("Distance between (%.1f, %.1f) and (%.1f, %.1f) is %.3f unit(s)\n",
           p1.x, p1.y, p2.x, p2.y, distance);
}
