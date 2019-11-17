#include <stdio.h>
#include "myMath.h"

double foo1(double x) {
//    f(x) = e^x + x^3 - 2
    double a = Exp((int)x);
    double b = Pow(x, 3);
    float c = add(a, b);
    float ans = sub(c, 2);

    return ans;
}

double foo2(double x){
//  f(x) = 3x + 2x^2
    double a = mul(x,3);
    double b = Pow(x, 2) ;
    double c = mul(b, 2);
    float ans = add(a,c);

    return ans;
}

double foo3(double x){
//  f(x) = (4x^3)/5 - 2x
    double a = Pow(x,3);
    double b = mul(a,4);
    double c = div(b,5);
    double d = mul(x,2);
    float ans = sub(c, d);

    return ans;
}

int main() {
    double x;
    printf("Please enter a real number: ");
    scanf("%lf", &x);
    double f1 = foo1(x);
    double f2 = foo2(x);
    double f3 = foo3(x);

printf("The value of f(x)=e^x+x^3-2 at the point %0.4lf is: %0.4lf\n", x, f1);
printf("The value of f(x)=3x+2x^2 at the point %0.4lf is: %0.4lf\n", x, f2);
printf("The value of f(x)=(4x^3)/5-2x at the point %0.4lf is: %0.4lf\n", x, f3);

return 1;
}