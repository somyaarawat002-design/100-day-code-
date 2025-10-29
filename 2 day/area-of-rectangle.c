#include <stdio.h>

int main() {
    float length, breadth, area, perimeter;

    // Input length and breadth
    printf("Enter the length of the rectangle: ");
    scanf("%f", &length);

    printf("Enter the breadth of the rectangle: ");
    scanf("%f", &breadth);

    // Calculate area and perimeter
    area = length * breadth;
    perimeter = 2 * (length + breadth);

    // Display the results
    printf("Area = %.2f\n", area);
    printf("Perimeter = %.2f\n", perimeter);

    return 0;
}
