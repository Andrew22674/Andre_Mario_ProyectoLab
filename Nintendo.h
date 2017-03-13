#pragma once
#include "Consolas.h"
#include <string>
//#include <boost/serialization/vector.hpp>

using namespace std;

class Nintendo : public Consolas {
  friend class boost::serialization::access;
  template<class Archive>
    void serialize(Archive &ar, const unsigned int version)
    {
        ar & boost::serialization::base_object<Consolas>(*this);
    }
private:
    //string nombre;


public:
    Nintendo();
    Nintendo(int,double,string,string,string);
    /*void setNombre(string nombre);
    string getNombre();*/
    virtual ~Nintendo();
};
