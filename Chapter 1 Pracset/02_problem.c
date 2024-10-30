#include <stdio.h>  // Include the standard input-output library

int main() {
    // Declare and initialize the radius and height variables
    int r = 6;        // Radius of the circle
    int height = 10;  // Height of the cylinder

    // Calculate and print the area of the circle
    // Formula for area: π * r^2, where π is approximated as 3.14
    printf("The area of the circle with radius %d is %.2f\n", r, 3.14 * r * r);

    // Calculate and print the volume of the cylinder
    // Formula for volume: π * r^2 * height
    printf("The volume of the cylinder with radius %d and height %d is %.2f\n", r, height, 3.14 * r * r * height);

    return 0;  // End of the program, return 0 to indicate successful execution
}

