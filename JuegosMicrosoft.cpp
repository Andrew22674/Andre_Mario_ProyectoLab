#include "JuegosMicrosoft.h"
#include "Juegos.h"

using namespace std;

JuegosMicrosoft::JuegosMicrosoft(){

}

JuegosMicrosoft::JuegosMicrosoft(string nombre, int anio, string consola, int numJug, string genero, string estado, int nSerie, double precio) : Juegos(nombre,anio,consola,numJug, genero, estado, nSerie, precio)  {

}

JuegosMicrosoft::~JuegosMicrosoft(){

}
