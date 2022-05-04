#include <stdio.h>
# define pi           3.14159265358979323846

// Newton-Babylonian method
double sqrt(double x){
    double xlast = 0;
    double xn = 1;

    while( xn-xlast > 0.001 || xlast-xn > 0.001){
        xlast = xn;
        xn = 0.5 * ( xn + (x/xn) );
    }
    return xn;
}


unsigned long factorial(unsigned long f)
{
    if ( f == 0 ) 
        return 1;
    return(f * factorial(f - 1));
}

double pow(double x, double n){
    if(n == 0) return 1.0;

    double y = 1.0;
    while(n>0){
        y *= x;
        n--;
    }

    if(n > 0 && n < 1) printf("this should be a square root function");
    if(n < 0) return 1/y;

    return y;
}