#include <stdio.h>
#include <math.h>

int main(){
    /*int a = 10, b = 7, d = 4, e =2;
    double c = 15.67, f = 5.6, z;

    z = a*b+(c/d)-e*f;*/

 
/* for (int num = 100; num >= 1; num--){
    if (num % 5 == 0)
    {
        printf("%d, ", num);
    }

 }*/

 int i, j;
 for (i = 1; i <= 5; i++)
 {
    for (j = 1; j <= i; j++)
    {
        printf("%d", j);
    }
    printf("\n");
 }
 

    return 0;

}