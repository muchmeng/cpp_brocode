#include <iostream>
#include <cmath>
// https://cplusplus.com/reference/cmath/

int main(){

    double x = 3.99;
    double y = 4;
    double z;
    
    z = std::max(x,y);
    z = std::min(x,y);

    z = pow(2, 3);// 2^3
    z = sqrt(9);

    z = abs(-111);

    z = round(x);
    z = ceil(x);

    z = floor(x);

    std::cout << z;

    return 0; 

}