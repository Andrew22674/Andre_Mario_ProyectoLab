#pragma once
#include "Consolas.h"

using namespace std;

class Nintendo : public Consolas {
private:
    string nombre;

public:
    Nintendo();
    Nintendo(string);
    void setNombre(string nombre);
    string getNombre();
    ~Nintendo();
};
