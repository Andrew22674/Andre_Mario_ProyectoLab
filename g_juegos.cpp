#include "g_juegos.h"

g_juegos::g_juegos(){

}

void g_juegos::addJuego(Juegos* juego){
  juegos.push_back(juego);
}

Juegos* g_juegos::getJuego(int index){
  return juegos[index];
}

int g_juegos::sizeVector(){
  return juegos.size();
}
