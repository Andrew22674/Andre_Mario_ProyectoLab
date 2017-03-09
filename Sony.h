#pragma once
#include "Consolas.h"
#include <string>

using namespace std;

class Sony : public Consolas {

private:
  string nombre;
  string marca;
public:
    Sony();
    Sony(int,double,string,string,string);
    void setNombre(string nombre);
    string getNombre();
    ~Sony();
};
