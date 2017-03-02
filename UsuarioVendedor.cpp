#include "UsuarioVendedor.h"

using namespace std;


UsuarioVendedor::UsuarioVendedor(){

}

UsuarioVendedor::UsuarioVendedor(string name, string hora_e, string hora_s){
  nombre = name;
  hora_entrada = hora_e;
  hora_salida = hora_s;
}

string UsuarioVendedor::getHoraEntrada(){
  return hora_entrada;
}

void UsuarioVendedor::setHoraEntrada(string hora_e){
  hora_entrada = hora_e;
}

string UsuarioVendedor::getHoraSalida(){
  return hora_salida;
}

void UsuarioVendedor::setHoraSalida(string hora_s){
  hora_salida = hora_s;
}
