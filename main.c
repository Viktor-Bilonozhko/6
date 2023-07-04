#include <stdio.h>
#include <math.h>

int main() {
    int x1, y1, x2, y2; // координати початку та к≥нц€ вектора
    scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
    double length = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1)); // обчисленн€ довжини вектора
    printf("%.6lf\n", length); // виведенн€ довжини вектора з точн≥стю до шести знак≥в п≥сл€ коми
    return 0;
}
