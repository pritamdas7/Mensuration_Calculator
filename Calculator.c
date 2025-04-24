#include <stdio.h>
#include <math.h>

// Circle functions
float areaCircle(float r) {
    return 3.14159 * r * r;
}

float circCircle(float r) {
    return 2 * 3.14159 * r;
}

// Rectangle functions
float areaRect(float l, float w) {
    return l * w;
}

float periRect(float l, float w) {
    return 2 * (l + w);
}

// Triangle functions
int validTriangle(float a, float b, float c) {
    if ((a + b > c) && (a + c > b) && (b + c > a))
        return 1;
    else
        return 0;
}

float areaTri(float a, float b, float c) {
    float s = (a + b + c) / 2;
    return sqrt(s * (s - a) * (s - b) * (s - c));
}

float periTri(float a, float b, float c) {
    return a + b + c;
}

int main() {
    int choice;
    float x, y, z;

    printf("Shape Calculator\n");
    printf("1. Circle\n");
    printf("2. Rectangle\n");
    printf("3. Triangle\n");
    printf("Choose a shape (1-3): ");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("Enter radius: ");
        scanf("%f", &x);
        if (x <= 0) {
            printf("Radius must be positive.\n");
            return 1;
        }
        printf("Circle Area: %.2f\n", areaCircle(x));
        printf("Circle Circumference: %.2f\n", circCircle(x));

    } else if (choice == 2) {
        printf("Enter length and width: ");
        scanf("%f %f", &x, &y);
        if (x <= 0 || y <= 0) {
            printf("Length and width must be positive.\n");
            return 1;
        }
        printf("Rectangle Area: %.2f\n", areaRect(x, y));
        printf("Rectangle Perimeter: %.2f\n", periRect(x, y));

    } else if (choice == 3) {
        printf("Enter three sides: ");
        scanf("%f %f %f", &x, &y, &z);
        if (x <= 0 || y <= 0 || z <= 0) {
            printf("Sides must be positive.\n");
            return 1;
        }
        if (!validTriangle(x, y, z)) {
            printf("Invalid triangle.\n");
            return 1;
        }
        printf("Triangle Area: %.2f\n", areaTri(x, y, z));
        printf("Triangle Perimeter: %.2f\n", periTri(x, y, z));

    } else {
        printf("Invalid choice.\n");
        return 1;
    }

    return 0;
}
