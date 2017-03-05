#include "Nintendo.h"

using namespace std;

Nintendo::Nintendo(){

}

Nintendo::Nintendo(string marca, int nSerie, double precio, string anioSalida,string estado, string nombre) : Consolas(marca,nSerie,precio,anioSalida,estado){
    this->nombre=nombre;
}

void Nintendo::setNombre(string nombre){
    this->nombre=nombre;
}

string Nintendo::getNombre(){
    return nombre;
}
