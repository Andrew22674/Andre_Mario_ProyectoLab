#include <iostream>
#include <string>
#include "Consolas.h"

using namespace std;



Consolas::Consolas(){

}

Consolas::Consolas(string marca, string nSerie, double precio, string anioSalida, string estado){
    this->marca=marca;
    this->nSerie=nSerie;
    this->precio=precio;
    this->anioSalida=anioSalida;
    this->estado=estado;
}

string Consolas::GetAnioSalida(){
    return anioSalida;
}

void Consolas::SetAnioSalida(string anioSalida) {
    this->anioSalida = anioSalida;
}

string Consolas::GetMarca(){
    return marca;
}

void Consolas::SetMarca(string marca) {
    this->marca = marca;
}

string Consolas::GetNSerie(){
    return nSerie;
}

void Consolas::SetNSerie(string nSerie) {
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

Consolas::~Consolas(){
    cout<<"Destruyendo objeto consolas"<<endl;
}
