#include <iostream>
#include <string>
#include "Consolas.h"

using namespace std;



Consolas::Consolas(){

}

Consolas::Consolas(string marca, string nombre, string nSerie, int precio, string anioSalida){
    this->marca=marca;
    this->nombre=nombre;
    this->nSerie=nSerie;
    this->precio=precio;
    this->anioSalida=anioSalida;
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

string Consolas::GetNombre(){
    return nombre;
}

void Consolas::SetNombre(string nombre) {
    this->nombre = nombre;
}

int Consolas::GetPrecio(){
    return precio;
}

void Consolas::SetPrecio(int precio) {
    this->precio = precio;
}

Consolas::~Consolas(){
    cout<<"Destruyendo objeto consolas"<<endl;
}
