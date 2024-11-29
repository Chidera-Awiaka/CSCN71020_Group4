#include <stdio.h>
#include <stdbool.h>
#include "main.h"
#include "triangleSolver.h"
#include "rectangleSolver.h"
#define _CRT_SECURE_NO_WARNINGS


void printWelcome() {
    printf("Welcome to the Polygon Checker Program!\n");
}

int printShapeMenu() {
    int choice = 0;
    printf("Please select a shape to analyze:\n");
    printf("1. Triangle\n");
    printf("2. Rectangle\n");
    printf("3. Exit\n");
    printf("Enter your choice: ");
    scanf_s("%d", &choice);
    return choice;
}

int* getTriangleSides(int sides[3]) {
    printf("Enter the three sides of the triangle: ");
    for (int i = 0; i < 3; i++) {
        scanf_s("%d", &sides[i]);
    }
    return sides;
}

void getRectanglePoints(int points[4][2]) {
    for (int i = 0; i < 4; i++) {
        printf("Enter x and y for point %d: ", i + 1);
        scanf_s("%d %d", &points[i][0], &points[i][1]);
    }
}

int main() {
    bool continueProgram = true;
    while (continueProgram) {
        printWelcome();
        int shapeChoice = printShapeMenu();

        switch (shapeChoice) {
        case 1: {
            printf("Triangle selected.\n");
            int triangleSides[3] = { 0, 0, 0 };
            getTriangleSides(triangleSides);
            char* result = analyzeTriangle(triangleSides[0], triangleSides[1], triangleSides[2]);
            printf("Triangle Analysis: %s\n", result);
            calculateAngles(triangleSides[0], triangleSides[1], triangleSides[2]);
            break;
        }
        case 2: {
            printf("Rectangle selected.\n");
            int points[4][2];
            getRectanglePoints(points);
            processRectangle(points);
            break;
        }
        case 3:
            printf("Exiting the program. Goodbye!\n");
            continueProgram = false;
            break;
        default:
            printf("Invalid choice. Please try again.\n");
        }
    }
    return 0;
}
