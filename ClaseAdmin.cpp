#include "ClaseAdmin.h"

ClaseAdmin::ClaseAdmin(){

}

void ClaseAdmin::setConsola(Consolas* consola){
  consolas.push_back(consola);
}

void ClaseAdmin::setJuego(Juegos* juego){
  juegos.push_back(juego);
}

Consolas* ClaseAdmin::getConsola(int index){
  return consolas.at(index);
}

Juegos* ClaseAdmin::getJuego(int index){
  return juegos.at(index);
}

ClaseAdmin::~ClaseAdmin(){

}
