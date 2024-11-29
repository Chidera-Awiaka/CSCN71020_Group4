#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#include "rectangleSolver.h"

// Function to calculate distance between two points
double calculateDistance(int x1, int y1, int x2, int y2) {
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}