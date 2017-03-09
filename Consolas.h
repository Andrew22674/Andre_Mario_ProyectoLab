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

  virtual string GetAnioSalida();

  virtual void SetAnioSalida(string anioSalida);

  //string GetMarca();

  //void SetMarca(string marca);

  virtual int GetNSerie();

  virtual void SetNSerie(int nSerie);

  virtual double GetPrecio();

  virtual void SetPrecio(double precio);

  virtual string getEstado();

  virtual void setEstado(string);

  ~Consolas();
};


#endif /* CONSOLAS_H */
