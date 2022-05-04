#include "m.hpp"

int distance(int x1, int y1, int x2, int y2){
    int x = pow(y1 - y2, 2) + pow(x1 - x2, 2);
    return sqrt(x);
}