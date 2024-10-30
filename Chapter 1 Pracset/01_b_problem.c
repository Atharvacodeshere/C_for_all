#include <stdio.h>

int main() {
    int length, breadth;
    
    // Prompt user for length
    printf("Enter the length of the rectangle: ");
    scanf("%d", &length);
    
    // Prompt user for width
    printf("Enter the width of the rectangle: ");
    scanf("%d", &breadth);
    
    // Calculate area
    int area = length * breadth;
    
    // Print the result
    printf("The area of the rectangle is: %d\n", area);

    return 0;
}
