#pragma once
#include "Consolas.h"
#include <string>

using namespace std;

class Sony : public Consolas {
private:
    string nombre;

public:
    Sony();
    Sony(string);
    void setNombre(string nombre);
    string getNombre();
    ~Sony();
};
