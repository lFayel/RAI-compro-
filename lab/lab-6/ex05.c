#include <stdio.h>
struct time {
    int min, sec;
};
int main(){
    struct time t1 = {1, 9};
    struct time t2 = {1, 0};
    struct time t3 = {1, 0};
    int total =t1.min*60+t1.sec+t2.min*60+t2.sec+t3.min*60+t3.sec;
    printf("Total time elapsed:%dsec(s)\n",total);
}