#include "Bandai.h"

using namespace std;

Bandai::Bandai(){

}

Bandai::Bandai(string nombre, int anio, string consola, int numJug, string genero, string estado, int nSerie, double precio) : Juegos(string,int,string,int,string,string,int,double) {
    this->nombre = nombre;
    this->anio = anio;
    this->consola = consola;
    this->numJug = numJug;
    this->genero = genero;
    this->estado = estado;
    this->nSerie = nSerie;
    this->precio = precio;
}

Bandai::~Bandai(){

}