#include <stdio.h>

int main() {
    float c = 37.0, f;   // Declare variables: c for Celsius (initialized to 37.0) and f for Fahrenheit

    // Convert Celsius to Fahrenheit using the formula: F = (9/5 * C) + 32
    // (9.0/5.0) ensures floating-point division for accurate calculation
    f = ((9.0 / 5.0) * c) + 32;

    // Print the Fahrenheit value
    // %f is used to format the output as a floating-point number
    printf("The value in Fahrenheit is %f\n", f);
    return 0;
}