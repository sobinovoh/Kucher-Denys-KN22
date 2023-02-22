#include <iostream>
#include <cmath>
#include <Windows.h>
#include "ModulesKucher8-1.h"
using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    float x = 0;
    float y = 0;
    float z = 0;
    cout << "¬вед≥ть x";
    cin >> x;
    cout << "¬вед≥ть y";
    cin >> y;
    cout << "¬вед≥ть z";
    cin >> z;
    Calculet(x,y,z);
    return 0;
}
