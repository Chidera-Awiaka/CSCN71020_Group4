#ifndef RECTANGLESOLVER_H
#define RECTANGLESOLVER_H

struct Point {
    double x;
    double y;
};

double distance(struct Point p1, struct Point p2);
int isRectangle(struct Point p1, struct Point p2, struct Point p3, struct Point p4);
double calculatePerimeter(double side1, double side2);
double calculateArea(double side1, double side2);

#endif
