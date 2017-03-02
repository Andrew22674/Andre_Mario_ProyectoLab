#include "Microsoft.h"

using namespace std;

Microsoft::Microsoft(){

}

Microsoft::Microsoft(string marca, string nSerie, int precio, string anioSalida,string estado, string nombre) : Consolas(marca,nSerie,precio,anioSalida,estado){
    this->nombre=nombre;
}

void Microsoft::setNombre(string nombre){
    this->nombre=nombre;
}

string Microsoft::getNombre(){
    return nombre;
}
