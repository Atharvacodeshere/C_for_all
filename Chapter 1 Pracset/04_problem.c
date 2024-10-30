 #include <stdio.h>
 
 int main() {
    // Declare and initialize the principal, rate of interest, and time in years
    float p = 34.1;  // Principal amount (initial investment or loan amount)
    int r = 8;       // Rate of interest (annual interest rate in percentage)
    int t = 5;       // Time period (number of years the money is invested or borrowed)

    // Calculate simple interest using the formula: 
    // Simple Interest (SI) = (Principal * Rate * Time) / 100
    // This formula gives the interest earned over the time period.
    printf("The value of simple interest is %f", (p * r * t) / 100);
    return 0;
 }