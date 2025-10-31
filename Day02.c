\\Q3. Write a program to calculate the area and perimeter of a rectangle given its length and breadth.

  #include <stdio.h>
int main() {
    float length, breadth, area, perimeter;
    printf("Enter the length of the rectangle: ");
    scanf("%f", &length);

    printf("Enter the breadth of the rectangle: ");
    scanf("%f", &breadth);
    area = length * breadth;
    perimeter = 2 * (length + breadth);
    printf("Area of the rectangle: %.2f\n", area);
    printf("Perimeter of the rectangle: %.2f\n", perimeter);
 return 0;
}

\\Q4. Write a program to calculate the area and circumference of a circle given its radius.

#include <stdio.h>
#define PI 3.14159

int main() {
    float radius, area, circumference;
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);
    area = PI * radius * radius;
    circumference = 2 * PI * radius;
    printf("Area of the circle: %.2f\n", area);
    printf("Circumference of the circle: %.2f\n", circumference);

    return 0;
}

