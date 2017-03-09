#include "Bandai.h"
#include "Juegos.h"

using namespace std;

Bandai::Bandai(){

}

Bandai::Bandai(string nombre, int anio, string consola, int numJug, string genero, string estado, int nSerie, double precio) : Juegos(nombre,anio,consola,numJug, genero, estado, nSerie, precio) {


}

Bandai::~Bandai(){

}
