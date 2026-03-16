#include <stdio.h>

int main () {
    int x;
    printf("Enter a three-digit number: ");
    scanf("%d",&x);
    int a,b,c;
    a=x%10;
    int m = x/10;
    b = m%10;
    c = m/10;
    printf("%d+%d+%d=%d\n",c,b,a,a+b+c);
    return 0;
}
