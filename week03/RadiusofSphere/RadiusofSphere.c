#include <stdio.h>

int main () {
    float radius;
    float pi = 3.1415;
    printf("Enter radius of the sphere");
    scanf("%f",&radius);
    printf("The area of sphere is %f\n",4*pi*radius*radius);
    printf("The volume of sphere is %f\n",4/3*pi*radius*radius*radius);
        
    return 0;

}