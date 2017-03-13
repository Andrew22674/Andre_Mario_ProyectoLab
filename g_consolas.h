#pragma once

#include <vector>
#include <string>
#include <boost/serialization/vector.hpp>
#include "Consolas.h"
#include "Sony.h"
#include "Microsoft.h"
#include "Nintendo.h"



class g_consolas{
  friend class boost::serialization::access;
private:
  vector<Consolas*> consolas;


public:

  g_consolas();
  void addConsola(Consolas*);
  Consolas* getConsola(int);

  int sizeVector();

  template<class Archive>
    void serialize(Archive &ar, const unsigned int version)
    {
        ar.register_type(static_cast<Sony*>(NULL));
        ar.register_type(static_cast<Microsoft*>(NULL));
        ar.register_type(static_cast<Nintendo*>(NULL));

        ar & consolas;

    }
};
