#pragma once

#include <vector>
#include <string>
#include <boost/serialization/vector.hpp>

#include "Juegos.h"
#include "Bandai.h"
#include "Bugisoft.h"
#include "ElectronicArts.h"
#include "JuegosMicrosoft.h"
#include "JuegosNintendo.h"
#include "JuegosSony.h"
#include "Konami.h"
#include "Sega.h"
#include "SquareEnix.h"

class g_juegos{
  friend class boost::serialization::access;
private:
  vector<Juegos*> juegos;

public:
  g_juegos();
  void addJuego(Juegos*);
  Juegos* getJuego(int);

  int sizeVector();

  template<class Archive>
    void serialize(Archive &ar, const unsigned int version)
    {
        ar.register_type(static_cast<Bandai*>(NULL));
        ar.register_type(static_cast<Bugisoft*>(NULL));
        ar.register_type(static_cast<ElectronicArts*>(NULL));
        ar.register_type(static_cast<JuegosMicrosoft*>(NULL));
        ar.register_type(static_cast<JuegosNintendo*>(NULL));
        ar.register_type(static_cast<JuegosSony*>(NULL));
        ar.register_type(static_cast<Konami*>(NULL));
        ar.register_type(static_cast<Sega*>(NULL));
        ar.register_type(static_cast<SquareEnix*>(NULL));
        ar & juegos;

    }
};
