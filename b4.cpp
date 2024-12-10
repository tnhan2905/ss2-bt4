#include <stdio.h>

int main() {
    float side = 5.0;
    float perimeter, area;

    perimeter = 4 * side;

    area = side * side;

    // In ra ket qua 
    printf("Canh cua hinh vuong: %.2f\n", side);
    printf("Chu vi cua hinh vuong la: %.2f\n", perimeter);
    printf("Dien tich cua hinh vuong la: %.2f\n", area);

    return 0;
}

