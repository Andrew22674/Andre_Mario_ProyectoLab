#pragma once
#include "Microsoft.h"
#include "Nintendo.h"
#include "Sony.h"
#include <string>
#include <vector>
#include "Consolas.h"
#include "Juegos.h"

using namespace std;

class Venta{
public:
  Venta(string, string, string);
  Venta();

  string getNombreCliente();
  string getHora();
  string getUsuario();
  string GetConsola(int);//retorna una consola en index i del vector de consolas
  string getJuego(int); // retorna un juego en index i del vector de juegos
  double getSubtotal();// retorna el precio de consolas y juegos
  int getCantidadArticulos();//retorna la cantidad de consolas y juegos
  int getSizeJuegos();//retorna el tamano del vector de juegos
  int getSizeConsolas();//retorna el tamano del vector de consolas


  void setNombre(string);
  void setHora(string);
  void setUsuario(string);
  void setSubtotal(double);
  void setConsola(Consolas*);//agrega una consola al vector de consolas
  void setJuego(Juegos*);//agrega un juego al vector de juegos
  //void setConsolas(vector<Consolas*>);
  //void setJuegos(vector<Juegos*>);
private:
  string nombreCliente;
  vector<Consolas*> consolas;
  vector<Juegos*> juegos;
  string hora;
  string usuario;
  double subtotal;


};
