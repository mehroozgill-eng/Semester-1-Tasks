# Week 3 Tasks

&#x20;Sphere Area and Volume Calculator (C Program)



&#x20;Description



This C program calculates the \*\*surface area\*\* and \*\*volume\*\* of a sphere using the radius provided by the user.



The program asks the user to enter the \*\*radius of the sphere\*\*, then uses mathematical formulas to compute the results.

&#x20;Formulas Used



Surface Area of Sphere

Area = 4 × π × r²



Volume of Sphere

Volume = (4/3) × π × r³



Where:



\* π (pi) = 3.1415

\* r = radius of the sphere



\---



&#x20;Features



\* Takes \*\*radius as input from the user\*\*

\* Calculates \*\*surface area of the sphere\*\*

\* Calculates \*\*volume of the sphere\*\*

\* Displays the results on the screen



&#x20;Technologies Used



\* C Programming Language

\* Standard Input/Output Library (`stdio.h`)



\---



&#x20;Program Logic



1\. The program declares a variable `radius` to store the user input.



2\. A variable `pi` is defined with the value \*\*3.1415\*\*.



3\. The user enters the radius of the sphere.



4\. The program calculates the \*\*surface area\*\* using:



&#x20;  `4 \* pi \* radius \* radius`



5\. The program calculates the \*\*volume\*\* using:



&#x20;  `(4/3) \* pi \* radius \* radius \* radius`



6\. The results are displayed using `printf()`.



\---

&#x20;Example Output



```

Enter radius of the sphere: 5

The area of sphere is 314.150000

The volume of sphere is 523.583333



\## File Structure



```

RadiusofSphere/

│

├── RadiusofSphere.c

└─README.md

```



