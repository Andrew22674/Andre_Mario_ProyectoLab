#include <iostream>
#include <string>

using namespace std;

#ifndef CONSOLAS_H
#define CONSOLAS_H

class Consolas{
protected:
  int nSerie;
  double precio;
  string anioSalida;
  string estado;
  string modelo;

public:
  Consolas();

  Consolas(int,double,string,string);

  string GetAnioSalida();

  void SetAnioSalida(string anioSalida);

  //string GetMarca();

  //void SetMarca(string marca);

  int GetNSerie();

  void SetNSerie(int nSerie);

  double GetPrecio();

  void SetPrecio(double precio);

  string getEstado();

  void setEstado(string);

  ~Consolas();
};


#endif /* CONSOLAS_H */
