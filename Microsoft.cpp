#include "Microsoft.h"

using namespace std;

Microsoft::Microsoft(){

}

Microsoft::Microsoft(string nombre){
    this->nombre=nombre;
}

void Microsoft::setNombre(string nombre){
    this->nombre=nombre;
}

string Microsoft::getNombre(){
    return nombre;
}
