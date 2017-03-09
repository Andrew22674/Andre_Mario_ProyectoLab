#include "Sony.h"

using namespace std;

Sony::Sony(){

}

Sony::Sony( int nSerie, double precio, string anioSalida,string estado, string nombre) : Consolas(nSerie,precio,anioSalida,estado){
    this->nombre=nombre;
    this->marca = "Sony";
}

void Sony::setNombre(string nombre){
    this->nombre=nombre;
}

string Sony::getNombre(){
    return nombre;
}
