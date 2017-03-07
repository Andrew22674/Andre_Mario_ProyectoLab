#include "Venta.h"
#include <sstream>
#include <string>


Venta::Venta(){
  subtotal = 0.0;
}

Venta::Venta(string cliente, string hour, string user){
  nombreCliente = cliente;
  hora = hour;
  usuario = user;
  subtotal = 0.0;

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
  stringstream ss;
  // ((B)a).foo();
  if ( consolas.at(index) -> GetMarca() == "Microsoft"){
    Consolas* consola = consolas.at(index);

    ss << ((Microsoft*)consola) -> getNombre()  << " Precio: " << consolas.at(index) -> GetPrecio();
  }

  return ss.str();
}

string Venta::getJuego(int index){
  stringstream ss;
  ss << juegos.at(index) -> GetNombre() << "Precio: " << juegos.at(index) -> GetPrecio();
  return ss.str();
}

double Venta::getSubtotal(){
    double subt = 0.0;

    for(int i = 0; i < consolas.size(); i++){
      subt += consolas[i] -> GetPrecio();
    }

    for(int i = 0; i < juegos.size(); i++){
      subt += juegos[i] -> GetPrecio();
    }
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

void Venta::setSubtotal(double subt){
  subtotal = subt;
}

int Venta::getCantidadArticulos(){
  return (consolas.size() + juegos.size());
}

int Venta::getSizeConsolas(){
  return consolas.size();
}

int Venta::getSizeJuegos(){
  return juegos.size();
}
