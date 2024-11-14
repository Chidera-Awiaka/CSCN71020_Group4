
#include <stdio.h>
#include <stdbool.h>
#include "rectanglesolver.h"

int main() {
    struct Point p1, p2, p3, p4;
    double side1, side2;

    // Input four points
    printf("Enter coordinates of point 1 (x y): ");
    scanf("%lf %lf", &p1.x, &p1.y);
    printf("Enter coordinates of point 2 (x y): ");
    scanf("%lf %lf", &p2.x, &p2.y);
    printf("Enter coordinates of point 3 (x y): ");
    scanf("%lf %lf", &p3.x, &p3.y);
    printf("Enter coordinates of point 4 (x y): ");
    scanf("%lf %lf", &p4.x, &p4.y);

    // Calculate side lengths
    side1 = distance(p1, p2);
    side2 = distance(p2, p3);

    // Check if points form a rectangle
    if (isRectangle(p1, p2, p3, p4)) {
        double perimeter = calculatePerimeter(side1, side2);
        double area = calculateArea(side1, side2);
        printf("The points form a rectangle.\n");
        printf("Perimeter: %.2f\n", perimeter);
        printf("Area: %.2f\n", area);
    }
    else {
        printf("The points do not form a rectangle.\n");
    }

    return 0;
}
