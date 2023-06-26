#include <stdio.h>
#include <math.h>

int main(){
    double width, height, area;

    scanf("%lf%lf", &width, &height);

    area = width * height;
    printf("%lf", area);
}