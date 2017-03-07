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
  return "" + consolas.at(i) -> getModelo + "" + consolas.at(i) -> getNombre() + " Precio: " + consolas.at(i) -> GetPrecio();
}

string Venta::getJuego(int index){
  return juegos.at(i) -> getNombre + "Precio: " + juegos.at(i) -> GetPrecio();
}

double getSubtotal(){
    double subt = 0.0;

    for(int i = 0; i < Consolas.size(); i++){
      subt += Consolas[i] -> GetPrecio();
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

double setSubtotal(double subt){
  subtotal = subt;
}

int getCantidadArticulos(){
  return Consolas.size() + juegos.size();
}

int getSizeConsolas(){
  return Consolas.size();
}

int getSizeJuegos(){
  return juegos.size();
}
