#include "Nintendo.h"

using namespace std;

Nintendo::Nintendo(){

}

Nintendo::Nintendo(string nombre){
    this->nombre=nombre;
}

void Nintendo::setNombre(string nombre){
    this->nombre=nombre;
}

string Nintendo::getNombre(){
    return nombre;
}
