#include "Sony.h"

using namespace std;

Sony::Sony(){

}

Sony::Sony(string nombre){
    this->nombre=nombre;
}

void Sony::setNombre(string nombre){
    this->nombre=nombre;
}

string Sony::getNombre(){
    return nombre;
}
