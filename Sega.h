#pragma once
#include "Juegos.h"
#include <string>

class Sega :  public Juegos{
  friend class boost::serialization::access;
  template<class Archive>
    void serialize(Archive &ar, const unsigned int version)
    {
        ar & boost::serialization::base_object<Juegos>(*this);
    }
private:


public:
    Sega ();
    Sega(string, int , string , int , string , string , int , double);
    virtual ~Sega ();
};
