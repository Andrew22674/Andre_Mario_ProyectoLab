#include "Microsoft.h"

using namespace std;

Microsoft::Microsoft(){

}

Microsoft::Microsoft(int nSerie, double precio, string anioSalida,string estado, string nombre) : Consolas(nSerie,precio,anioSalida,estado){
    this->nombre=nombre;
    this->marca = "Microsoft";
}

void Microsoft::setNombre(string nombre){
    this->nombre=nombre;
}

string Microsoft::getNombre(){
    return nombre;
}
