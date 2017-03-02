#pragma once
#include "Consolas.h"

using namespace std;

class Microsoft : public Consolas {
private:
    string nombre;

public:
    Microsoft();
    Microsoft(string);
    void setNombre(string nombre);
    string getNombre();
    ~Microsoft();
};
