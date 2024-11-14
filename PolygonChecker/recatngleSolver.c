
#include <math.h>
#include "rectanglesolver.h"

// Function to calculate the distance between two points
double distance(struct Point p1, struct Point p2) {
    return sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2));
}

// Function to check if four points form a rectangle
int isRectangle(struct Point p1, struct Point p2, struct Point p3, struct Point p4) {
    double d1 = distance(p1, p2);
    double d2 = distance(p2, p3);
    double d3 = distance(p3, p4);
    double d4 = distance(p4, p1);
    double diag1 = distance(p1, p3);
    double diag2 = distance(p2, p4);

    // Check if opposite sides are equal and diagonals are equal
    return (d1 == d3 && d2 == d4 && diag1 == diag2);
}

// Function to calculate perimeter of the rectangle
double calculatePerimeter(double side1, double side2) {
    return 2 * (side1 + side2);
}

// Function to calculate area of the rectangle
double calculateArea(double side1, double side2) {
    return side1 * side2;
}
