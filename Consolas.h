#include <iostream>
#include <string>

using namespace std;

#ifndef CONSOLAS_H
#define CONSOLAS_H

class Consolas{
private:
  string marca;
  string nSerie;
  double precio;
  string anioSalida;
  string estado;

public:
  Consolas();

  Consolas(string,string,double,string,string);

  string GetAnioSalida();

  void SetAnioSalida(string anioSalida);

  string GetMarca();

  void SetMarca(string marca);

  string GetNSerie();

  void SetNSerie(string nSerie);

  double GetPrecio();

  void SetPrecio(double precio);

  string getEstado();

  void setEstado(string);

  ~Consolas();
};


#endif /* CONSOLAS_H */
