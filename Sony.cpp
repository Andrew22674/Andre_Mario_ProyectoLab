#include "Sony.h"

using namespace std;

Sony::Sony(){

}

Sony::Sony(string marca, string nSerie, int precio, string anioSalida,string estado, string nombre) : Consolas(marca,nSerie,precio,anioSalida,estado){
    this->nombre=nombre;
}

void Sony::setNombre(string nombre){
    this->nombre=nombre;
}

string Sony::getNombre(){
    return nombre;
}
