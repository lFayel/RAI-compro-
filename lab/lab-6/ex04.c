#include <stdio.h>
struct Vector {
    float x, y;
};
int main() {
    struct Vector u = {2.3, 1.5};
    struct Vector v = {0.0, 4.0};
    struct Vector result = {u.x + v.x, u.y + v.y};
    printf("Resultant vector is equivalence to %.1fi + %.1fj\n",
           result.x, result.y);
}