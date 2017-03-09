#include "Nintendo.h"

using namespace std;

Nintendo::Nintendo(){

}

Nintendo::Nintendo(int nSerie, double precio, string anioSalida,string estado, string nombre) : Consolas(nSerie,precio,anioSalida,estado){
    this->nombre=nombre;
    this->marca = "Nintendo";
}

void Nintendo::setNombre(string nombre){
    this->nombre=nombre;
}

string Nintendo::getNombre(){
    return nombre;
}
