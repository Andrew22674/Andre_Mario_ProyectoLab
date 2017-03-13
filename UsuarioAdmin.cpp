#include "UsuarioAdmin.h"
#include <string>

using namespace std;

UsuarioAdmin::UsuarioAdmin(){

}

UsuarioAdmin::UsuarioAdmin(string nombre, string contrasena){
  this -> nombre = nombre;
  this -> contrasena = contrasena;
}

string UsuarioAdmin::getNombre(){
  return nombre;
}

void UsuarioAdmin::setNombre(string nombre){
  this -> nombre = nombre;
}

string UsuarioAdmin::getContrasena(){
  return contrasena;
}

void UsuarioAdmin::setContrasena(string contrasena){
  this -> contrasena = contrasena;
}


UsuarioAdmin::~UsuarioAdmin(){
  
}
