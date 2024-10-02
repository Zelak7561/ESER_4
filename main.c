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

       printf("The diameter of the circle is: [%f]\n", diameter);
       printf("The perimeter of the circle is: [%f]\n", perimeter);
       printf("The area of the circle is: [%f]\n", area);

   } else {
       printf("Radius not valid");
   }



    return 0;
}
