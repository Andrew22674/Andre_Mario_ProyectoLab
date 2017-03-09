#include "EA.h"
#include "Juegos.h"
using namespace std;

EA::EA(){

}

EA::EA(string nombre, int anio, string consola, int numJug, string genero, string estado, int nSerie, double precio) : Juegos(nombre,anio,consola,numJug, genero, estado, nSerie, precio)  {

}

EA::~EA(){

}
