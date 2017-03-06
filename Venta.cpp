#include "Venta.h"

Venta::Venta(){
  subtotal = 0.0;
}

Venta::Venta(string cliente, vector<Consolas> consoles, vector<Juegos> games, string hour, string user, double subt){
  nombreCliente = cliente;
  consolas = consoles;
  juegos = games;
  hora = hour;
  usuario = user;
  subtotal = subt;

}

string Venta::getNombreCliente(){
  return nombreCliente;
}

string Venta::getHora(){
  return hora;
}

string Venta::getUsuario(){
  return usuario;
}

string Venta::GetConsola(int index){
  return "" + consolas.at(i) -> getModelo + "" + consolas.at(i) -> getNombre();
}

string Venta::getJuego(int index){
  return juegos.at(i) -> getNombre;
}

void Venta::setNombre(string nombre){
  nombreCliente = nombre;
}

void Venta::setHora(string hour){
  hora = hour;
}

void Venta::setUsuario(string user){
  usuario = user;
}

double setSubtotal(double subt){
  subtotal = subt;
}
