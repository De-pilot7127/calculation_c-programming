//calculating the volume and surface area
#include <stdio.h>
#define PI 3.14159  // Define Pi value

int main() {
    float radius, height, volume, surfaceArea;

    printf("Enter the radius of the cylinder: ");
    scanf("%f", &radius);

    printf("Enter the height of the cylinder: ");
    scanf("%f", &height);

    // Calculate the volume
    volume = PI * radius * radius * height;

    // Calculate the surface area
    surfaceArea = 2 * PI * radius * (radius + height);

    printf("Volume of the cylinder: %.2f\n", volume);
    printf("Surface area of the cylinder: %.2f\n", surfaceArea);

    return 0;
}
