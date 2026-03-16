#include <stdio.h>

int main() {
    float centimeters, inches;

    //  input
    printf("Enter length in centimeters: ");
    scanf("%f", &centimeters);

    //  negative value
    if (centimeters < 0) {
        printf("Invalid entry. Length cannot be negative.\n");
    } else {
    //  centimeters to inches
        inches = centimeters / 2.54;
        printf("Length in inches: %.2f\n", inches);
    }

    return 0;
}