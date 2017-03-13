#include "g_consolas.h"

g_consolas::g_consolas(){

}

void g_consolas::addConsola(Consolas* consola){
  consolas.push_back(consola);
}

Consolas* g_consolas::getConsola(int index){//retorna consola en consolas[index]
  return consolas[index];
}

int g_consolas::sizeVector(){
  return consolas.size();
}
