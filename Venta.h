#include <string>
#include <vector>
#pragma once
using namespace std;

class Venta{
public:
  Venta(string, vector<Consolas>, vector<Juegos>, string, string, double);
  Venta();

  string getNombreCliente();
  string getHora();
  string getUsuario();
  string getConsola(int);//retorna una consola en index i del vector de consolas
  string getJuego(int); // retorna un juego en index i del vector de juegos
  double getSubtotal();

  void setNombre(string);
  void setHora(string);
  void setUsuario(string);
  void setSubtotal(double);
private:
  string nombreCliente;
  vector<Consolas> Consolas;
  vector<Juegos> juegos;
  string hora;
  string usuario;
  double subtotal;


}
