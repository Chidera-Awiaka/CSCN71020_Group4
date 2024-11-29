#ifndef MAIN_H
#define MAIN_H

// Print the welcome message
void printWelcome();

// Display the shape menu and get user's choice
int printShapeMenu();

// Get the sides of a triangle from the user
int* getTriangleSides(int sides[3]);

// Get the points of a rectangle from the user
void getRectanglePoints(int points[4][2]);

#endif // MAIN_H
