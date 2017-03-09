#pragma once
#include <vector>
#include <string>

#include "Consolas.h"
#include "Juegos.h"

class ClaseAdmin{
private:
  vector<Consolas*> consolas;
  vector<Juegos*> juegos;
  //vector<UsuarioAdmin*> usuarios;


public:
  ClaseAdmin();
  void setConsola(Consolas*);
  Consolas* getConsola(int);
  void setJuego(Juegos*);
  Juegos* getJuego(int);
  ~ClaseAdmin();

};
