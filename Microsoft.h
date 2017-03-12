#pragma once
#include "Consolas.h"
#include <string>
//#include <boost/serialization/base_object.hpp>

using namespace std;

class Microsoft : public Consolas {
  //friend class boost::serialization::access;
  /*template<class Archive>
    void serialize(Archive &ar, const unsigned int version)
    {
        ar & boost::serialization::base_object<Consolas>(*this);
    }*/
private:
    //string nombre;

public:
    Microsoft();
    Microsoft(int,double,string,string,string);
    /*void setNombre(string nombre);
    string getNombre();*/
    ~Microsoft();
};
