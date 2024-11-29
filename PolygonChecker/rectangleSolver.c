#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#include "rectangleSolver.h"

// Function to calculate distance between two points
double calculateDistance(int x1, int y1, int x2, int y2) {
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

// Function to check if the four points form a rectangle
bool isRectangle(int points[4][2]) {
    double d1 = calculateDistance(points[0][0], points[0][1], points[1][0], points[1][1]);
    double d2 = calculateDistance(points[1][0], points[1][1], points[2][0], points[2][1]);
    double d3 = calculateDistance(points[2][0], points[2][1], points[3][0], points[3][1]);
    double d4 = calculateDistance(points[3][0], points[3][1], points[0][0], points[0][1]);
    double diag1 = calculateDistance(points[0][0], points[0][1], points[2][0], points[2][1]);
    double diag2 = calculateDistance(points[1][0], points[1][1], points[3][0], points[3][1]);

    return (d1 == d3 && d2 == d4 && diag1 == diag2);
}

// Function to calculate the perimeter of a rectangle
double calculatePerimeter(double d1, double d2) 
{
    return 2 * (d1 + d2);
}

// Function to calculate the area of a rectangle
double calculateArea(double d1, double d2) 
{
    return d1 * d2;
}
