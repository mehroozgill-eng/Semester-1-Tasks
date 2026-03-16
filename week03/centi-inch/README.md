 Week 3 Tasks



Centimeters to Inches Converter (C Program)

 ;Description



This C program converts a length entered by the user from centimeters to inches.

It also checks if the entered value is negative and displays an error message if the input is invalid.



The program uses a simple mathematical formula:



Inches = Centimeters ÷ 2.54



Since 1 inch = 2.54 centimeters, dividing the centimeter value by 2.54 converts it into inches.







 Features



Takes user input in centimeters.

Validates input to ensure the value is not negative.

Converts the value from centimeters to inches.

Displays the result rounded to 2 decimal places.







Technologies Used



C Programming Language

Standard Input/Output Library (`stdio.h`)





;Program Logic



1. The program declares two variables:



  centimeters` to store the input value.

   inches to store the converted value.



2. The user enters the length in centimeters.


3. The program checks if the value is less than 0.


4. If the value is negative, an error message is displayed.


5. Otherwise, the program converts centimeters to inches using the formula:



; inches = centimeters / 2.54



6. The result is printed with two decimal places.







Example Output



Example 1:



Enter length in centimeters: 10

Length in inches: 3.94





Example 2 (Invalid Input):



Enter length in centimeters: -5

Invalid entry. Length cannot be negative.


./converter

File Structure



converter/

│

├── program.c

└── README.md





;Author



Muhammad Mehrooz Asad Gill



