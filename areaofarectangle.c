#include <stdio.h>
#include <math.h>

int main(){
    double width, height, area, perimeter;

    scanf("%lf%lf", &width, &height);

    area = width * height;
    printf("The area of the rectangle is: %.2lf\n", area);

    perimeter = (2 * width) + (2 * height);
    printf("The peremeter of the rectangle is: %.2lf", perimeter);

    return 0;
}