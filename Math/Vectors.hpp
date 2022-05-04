#include <m.hpp>

class Vector{
    public:
        double magnitude();
        std::tuple<int,int> normalize();
    private:
        int x;
        int y;
};


double Vector::magnitude(){
    double s = pow(x, 2) + pow(y, 2);
    return sqrt(s);
}

std::tuple<int,int> Vector::normalize(){
    int dx = x/magnitude();
    int dy = y/magnitude();
    return std::make_tuple(dx, dy);
}