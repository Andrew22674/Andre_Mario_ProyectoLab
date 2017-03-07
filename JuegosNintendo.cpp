#include "JuegosNintendo.h"

using namespace std;

JuegosNintendo::JuegosNintendo(){

}

JuegosNintendo::JuegosNintendo(string nombre, int anio, string consola, int numJug, string genero, string estado, int nSerie, double precio, string compania) : Juegos(string,int,string,int,string,string,int,double, string)  {
    this->nombre = nombre;
    this->anio = anio;
    this->consola = consola;
    this->numJug = numJug;
    this->genero = genero;
    this->estado = estado;
    this->nSerie = nSerie;
    this->precio = precio;
    this->compania = compania;
}

JuegosNintendo::~JuegosNintendo(){

}
