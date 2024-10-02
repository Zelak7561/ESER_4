#include <math.h>
#include <stdio.h>

int main(void) {

    float r = 0.0;
    const float pi = 3.141592653589793;
    float diameter;
    float area;
    float perimeter;

    printf("Enter the radius of the circle: ");
    scanf("%f", &r);

    printf("\n");

   if(r != 0.0) {
       diameter = 2 * r;
       perimeter = 2 * pi * r;
       area = pi * (r * r) ;

       printf("Diameter = %f\nPerimeter = %f\nArea: %f\n", diameter , perimeter , area);

   } else {
       printf("Radius not valid");
   }



    return 0;
}
