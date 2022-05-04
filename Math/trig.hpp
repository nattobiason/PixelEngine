#include "m.hpp"

// Taylor series
double sin(double x){
    double y = 0;

    for(int n = 0; n < 10; n++){
        y += pow(-1,n)/factorial(2*n+1) * pow(x, 2*n+1);
    }

    return y;
}

// taylor series
double cos(double x){
    double y = 1;

    for(int n = 1; n < 10; n++){
        y += pow(-1,n)/factorial(2*n) * pow(x, 2*n) ;
        // printf("n: %d\n", n);
        // printf("(-1)^n: %f\n", pow(-1,n));
        // printf("(2n)!: %lu\n", factorial(2*n));
        // printf("x^2n: %f\n", pow(x, 2*n));
        // printf("y: %f\n", y);
    }

    return y;
}

double tan(double x){
    return sin(x)/cos(x);
}

// Taylor series... |x| <= 1
double arctan(double x){
    double y = x;

    for(int n = 1; n < 10; n++){
        y += ( pow(-1,n) * pow(x, 2*n+1) )/(2*n+1);
    }

    return y;
}

double radians_to_degrees(double x){
    return x * 180 / pi;
}

double degrees_to_radians(double x){
    return x * pi / 180;
}

double angle(int x1, int y1, int x2, int y2){
    int dx = x1-x2;
    int dy = y1-y2;
    if(dx == 0 || dy == 0) return 0;

    return arctan(dy/dx);

}