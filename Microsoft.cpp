#include "Microsoft.h"

using namespace std;

Microsoft::Microsoft(){

}

Microsoft::Microsoft(int nSerie, double precio, string anioSalida,string estado, string modelo) : Consolas(nSerie,precio,anioSalida,estado, modelo){


}

/*void Microsoft::setNombre(string nombre){
    this->nombre=nombre;
}

string Microsoft::getNombre(){
    return nombre;
}
*/

Microsoft::~Microsoft(){
  
}
