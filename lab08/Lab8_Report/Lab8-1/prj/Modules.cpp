#include "ModulesKucher8-1.h"
#include <iostream>
#include <cmath>
using namespace std;
float Calculet(float x, float y, float z){
float s = abs(sqrt(abs(z - 2*x)) - x*sin(pow(x,2*z)*y));
cout << s;
    return(s);
}
