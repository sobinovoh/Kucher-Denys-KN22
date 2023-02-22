#include <iostream>
#include <Windows.h>
#include "ModulesKucher.h"
using namespace std;
void name(){
   cout << (char)169 << " учер ƒенис"<<endl;
}
string tru(int a, int b);

int main()
{

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    float x = 0;
    float y = 0;
    float z = 0;
    float a = 0;
    float b = 0;
    name();
    cout << "¬вед≥ть a";
    cin >> a;
    cout << "¬вед≥ть b";
    cin >> b;

    cout << "¬вед≥ть x";
    cin >> x;
    cout << "¬вед≥ть y";
    cin >> y;
    cout << "¬вед≥ть z";
    cin >> z;


    cout << tru(a,b)<<endl;
    s_calculation(x,y,z);
    return 0;
}

string tru(int a, int b){
    string c = "true";
    if(a+1!=b+2){
    c = "false";}
    return(c);
    }
