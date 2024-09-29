#include <stdio.h>
double area(double a, double pi){
   double area = a * a * pi;
    return area;
  
}
    
int main(){
    double a;
    double pi = 3.1416;
    
      printf("Please enter the value of a!\n");
    scanf("%lf", &a);

     printf("The area of the circle is: %lf\n", area(a, pi));
    return 0;
}