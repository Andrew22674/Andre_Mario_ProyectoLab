#include "Nintendo.h"

using namespace std;

Nintendo::Nintendo(){

}

Nintendo::Nintendo(int nSerie, double precio, string anioSalida,string estado, string modelo) : Consolas(nSerie,precio,anioSalida,estado, modelo){

}

/*void Nintendo::setNombre(string nombre){
    this->nombre=nombre;
}

string Nintendo::getNombre(){
    return nombre;
}
*/
