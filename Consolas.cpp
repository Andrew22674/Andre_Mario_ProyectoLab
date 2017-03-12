#include <iostream>
#include <string>
#include "Consolas.h"


using namespace std;



Consolas::Consolas(){

}

Consolas::Consolas(int nSerie, double precio, string anioSalida, string estado, string modelo){

    this->nSerie=nSerie;
    this->precio=precio;
    this->anioSalida=anioSalida;
    this->estado=estado;
    this->modelo=modelo;
}

string Consolas::GetAnioSalida(){
    return anioSalida;
}

void Consolas::SetAnioSalida(string anioSalida) {
    this->anioSalida = anioSalida;
}

/*string Consolas::GetMarca(){
    return marca;
}*/

/*void Consolas::SetMarca(string marca) {
    this->marca = marca;
}*/

int Consolas::GetNSerie(){
    return nSerie;
}

void Consolas::SetNSerie(int nSerie) {
    this->nSerie = nSerie;
}

double Consolas::GetPrecio(){
    return precio;
}

void Consolas::SetPrecio(double precio) {
    this->precio = precio;
}

string Consolas::getEstado(){
    return estado;
}

void Consolas::setEstado(string estado){
    this->estado = estado;
}

string Consolas::getModelo(){
  return modelo;
}

void Consolas::setModelo(string modelo){
  this->modelo = modelo;
}
Consolas::~Consolas(){
    //cout<<"Destruyendo objeto consolas"<<endl;
}
