#include <stdio.h>
#include <stdbool.h>
#include <math.h>

#include "triangleSolver.h"

#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif

char* analyzeTriangle(int side1, int side2, int side3) {
    char* result = "";
    if (side1 <= 0 || side2 <= 0 || side3 <= 0) {
        result = "Not a triangle";
    }
    else if (side1 + side2 <= side3 || side1 + side3 <= side2 || side2 + side3 <= side1) {
        result = "Not a triangle";
    }
    else if (side1 == side2 && side1 == side3) {
        result = "Equilateral triangle";
    }
    else if ((side1 == side2 && side1 != side3) ||
        (side1 == side3 && side1 != side2) ||
        (side2 == side3 && side2 != side1)) {
        result = "Isosceles triangle";
        }
    else {
        result = "Scalene triangle";
    }

    return result;
}