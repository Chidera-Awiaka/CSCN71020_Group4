#ifndef RECTANGLESOLVER_H
#define RECTANGLESOLVER_H

#include <stdbool.h>

// Calculate the distance between two points
double calculateDistance(int x1, int y1, int x2, int y2);

// Check if the given points form a rectangle
bool isRectangle(int points[4][2]);

// Calculate the perimeter of a rectangle
double calculatePerimeter(double d1, double d2);

// Calculate the area of a rectangle
double calculateArea(double d1, double d2);

// Process rectangle points and display properties
void processRectangle(int points[4][2]);

#endif // RECTANGLESOLVER_H
