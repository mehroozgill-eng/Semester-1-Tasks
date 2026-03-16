#include<stdio.h>
int main()
{
    int num1, num2; // define two int variables
    printf("Enter 1st integer = ");
    scanf("%d", &num1); // take 1st input number
    printf("Enter 2nd integer = ");
    scanf("%d", &num2); // take 2nd input number
    printf("The sum of %d and %d is %d\n", num1, num2, num1 + num2);
    printf("The difference of %d and %d is %d\n", num1, num2, num1 - num2);
    printf("The product of %d and %d is %d\n", num1, num2, num1 * num2);
    printf("The quotient of %d and %d is %d\n", num1, num2, num1 / num2);
    
    return 0;
}