#include <stdio.h>
#include <math.h>  // for sqrt function

// Function to calculate area of a circle
float areaCircle(float r) {
    return 3.14159 * r * r;
}

// Function to calculate circumference of a circle
float circCircle(float r) {
    return 2 * 3.14159 * r;
}

// Function to calculate area of a rectangle
float areaRect(float l, float w) {
    return l * w;
}

// Function to calculate perimeter of a rectangle
float periRect(float l, float w) {
    return 2 * (l + w);
}

// Function to check if a triangle is valid
int validTriangle(float a, float b, float c) {
    if ((a + b > c) && (a + c > b) && (b + c > a))
        return 1;  // valid
    else
        return 0;  // not valid
}

// Function to calculate area of a triangle using Heron's formula
float areaTri(float a, float b, float c) {
    float s = (a + b + c) / 2;  // semi-perimeter
    return sqrt(s * (s - a) * (s - b) * (s - c));
}

// Function to calculate perimeter of a triangle
float periTri(float a, float b, float c) {
    return a + b + c;
}

int main() {
    int choice;
    float x, y, z;

    // Display shape options
    printf("Shape Calculator\n");
    printf("1. Circle\n");
    printf("2. Rectangle\n");
    printf("3. Triangle\n");
    printf("Choose a shape (1-3): ");
    scanf("%d", &choice);  // User input for shape selection

    if (choice == 1) {
        // Circle calculations
        printf("Enter radius: ");
        scanf("%f", &x);

        // Check for valid radius
        if (x <= 0) {
            printf("Radius must be positive.\n");
            return 1;
        }

        // Display results
        printf("Circle Area: %.2f\n", areaCircle(x));
        printf("Circle Circumference: %.2f\n", circCircle(x));

    } else if (choice == 2) {
        // Rectangle calculations
        printf("Enter length and width: ");
        scanf("%f %f", &x, &y);

        // Check for valid inputs
        if (x <= 0 || y <= 0) {
            printf("Length and width must be positive.\n");
            return 1;
        }

        // Display results
        printf("Rectangle Area: %.2f\n", areaRect(x, y));
        printf("Rectangle Perimeter: %.2f\n", periRect(x, y));

    } else if (choice == 3) {
        // Triangle calculations
        printf("Enter three sides: ");
        scanf("%f %f %f", &x, &y, &z);

        // Check for valid sides
        if (x <= 0 || y <= 0 || z <= 0) {
            printf("Sides must be positive.\n");
            return 1;
        }

        // Validate triangle
        if (!validTriangle(x, y, z)) {
            printf("Invalid triangle.\n");
            return 1;
        }

        // Display results
        printf("Triangle Area: %.2f\n", areaTri(x, y, z));
        printf("Triangle Perimeter: %.2f\n", periTri(x, y, z));

    } else {
        // Invalid choice handling
        printf("Invalid choice.\n");
        return 1;
    }

    return 0;
}
