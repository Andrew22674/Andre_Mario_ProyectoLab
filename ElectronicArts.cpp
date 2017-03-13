#include "ElectronicArts.h"
#include "Juegos.h"

using namespace std;

ElectronicArts::ElectronicArts(){

}

ElectronicArts::ElectronicArts(string nombre, int anio, string consola, int numJug, string genero, string estado, int nSerie, double precio) : Juegos(nombre,anio,consola,numJug, genero, estado, nSerie, precio)  {

}

ElectronicArts::~ElectronicArts(){

}
