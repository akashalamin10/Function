#include <stdio.h>
void area(){
    double a;
    double pi = 3.1416;
    printf("Please enter the value of a!\n");
    scanf("%lf", &a);

     printf("The area of the circle is: %lf\n", pi * a * a);
}
    
int main(){
    area();
    return 0;
}