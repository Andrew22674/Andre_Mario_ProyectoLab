#include "UsuarioVendedor.h"
#include <string>
using namespace std;


UsuarioVendedor::UsuarioVendedor(){

}

UsuarioVendedor::UsuarioVendedor(string name, string hora_e){
  nombre = name;
  hora_entrada = hora_e;
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

string UsuarioVendedor::getNombre(){
  return nombre;
}

void UsuarioVendedor::setNombre(string name){
  nombre = name;
}

void UsuarioVendedor:: vender(){
  
}
