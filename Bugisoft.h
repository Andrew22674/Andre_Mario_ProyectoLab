#pragma once

#include <string>
#include "Juegos.h"

class Bugisoft : public Juegos{
  friend class boost::serialization::access;
  template<class Archive>
    void serialize(Archive &ar, const unsigned int version)
    {
        ar & boost::serialization::base_object<Juegos>(*this);
    }
private:


public:
    Bugisoft ();
    Bugisoft(string, int , string , int , string , string , int , double);
    virtual ~Bugisoft ();
};
