#pragma once
#include "Consolas.h"
#include <string>

using namespace std;

class Microsoft : public Consolas {
private:
    string nombre;

public:
    Microsoft();
    Microsoft(string,int,double,string,string,string);
    void setNombre(string nombre);
    string getNombre();
    ~Microsoft();
};
