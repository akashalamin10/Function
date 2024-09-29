#include <stdio.h>
void area(double a, double pi){
    


     printf("The area of the circle is: %lf\n", pi * a * a);
}
    
int main(){

double a, pi = 3.1416;
    printf("Please enter the value of a!\n");
    scanf("%lf", &a);
    area(a, pi);



    return 0;
}