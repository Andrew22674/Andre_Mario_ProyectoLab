#pragma once
#include "Consolas.h"
#include <string>
//#include <boost/serialization/vector.hpp>

using namespace std;

class Nintendo : public Consolas {
private:
    //string nombre;


public:
    Nintendo();
    Nintendo(int,double,string,string,string);
    /*void setNombre(string nombre);
    string getNombre();*/
    ~Nintendo();
};
