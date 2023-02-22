#include "ModulesKucher.h"
#include <iostream>
#include <Windows.h>
using namespace std;

int s_calculation(int x, int y, int z){
     cout <<"x в 16 системі " << x<<endl;
     cout <<"y в 16 системі " << y<<endl;
     cout <<"z в 16 системі " << z<<endl<<endl;

     cout <<"x в 16 системі " << hex << x<<endl;
     cout <<"y в 16 системі " << hex << y<<endl;
     cout <<"z в 16 системі " << hex << z<<endl;


     return (0);
}
