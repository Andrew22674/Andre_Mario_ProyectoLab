#include "SquareEnix.h"
#include "Juegos.h"
#include <string>

using namespace std;

SquareEnix::SquareEnix(){

}

SquareEnix::SquareEnix(string nombre, int anio, string consola, int numJug, string genero, string estado, int nSerie, double precio) : Juegos(nombre,anio,consola,numJug, genero, estado, nSerie, precio) {


}

SquareEnix::~SquareEnix(){

}
