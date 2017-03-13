#include "Juegos.h"
#include <string>
#include <iostream>

using namespace std;

Juegos::Juegos() {
}

Juegos::Juegos(string nombre, int anio, string consola, int numJug, string genero, string estado, int nSerie, double precio) {
    this->nombre = nombre;
    this->anio = anio;
    this->consola = consola;
    this->numJug = numJug;
    this->genero = genero;
    this->estado = estado;
    this->nSerie = nSerie;
    this->precio = precio;

}

int Juegos::GetAnio(){
    return anio;
}

void Juegos::SetAnio(int anio) {
    this->anio = anio;
}

string Juegos::GetConsola(){
    return consola;
}

void Juegos::SetConsola(string consola) {
    this->consola = consola;
}

string Juegos::GetEstado(){
    return estado;
}

void Juegos::SetEstado(string estado) {
    this->estado = estado;
}

string Juegos::GetGenero()  {
    return genero;
}

void Juegos::SetGenero(string genero) {
    this->genero = genero;
}

int Juegos::GetNSerie(){
    return nSerie;
}

void Juegos::SetNSerie(int nSerie) {
    this->nSerie = nSerie;
}

string Juegos::GetNombre() {
    return nombre;
}

void Juegos::SetNombre(string nombre) {
    this->nombre = nombre;
}

int Juegos::GetNumJug(){
    return numJug;
}

void Juegos::SetNumJug(int numJug) {
    this->numJug = numJug;
}

double Juegos::GetPrecio() {
    return precio;
}

void Juegos::SetPrecio(double precio) {
    this->precio = precio;
}

Juegos::~Juegos(){
	//cout<<"Destruyendo objeto Juegos"<<endl;
}
