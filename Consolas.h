#include <iostream>
#include <string>
//#include <boost/serialization/vector.hpp>

using namespace std;

#ifndef CONSOLAS_H
#define CONSOLAS_H

class Consolas{

  /*friend class boost::serialization::access;
  friend std::ostream & operator<<(std::ostream &os, const Consolas &co);*/
  /*template<class Archive>
   void serialize(Archive &ar, const unsigned int version)
   {
       ar & nSere;
       ar & precio;
       ar & anioSalida;
       ar & estado;
       ar & modelo;
   }*/

protected:
  int nSerie;
  double precio;
  string anioSalida;
  string estado;
  string modelo;

public:
  Consolas();

  Consolas(int,double,string,string, string);

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

  virtual string getModelo();

  virtual void setModelo(string);


  ~Consolas();
};

std::ostream & operator<<(std::ostream &os, const Consolas &co)
{
    return os << co.nSerie << co.precio << ' ' << co.GetAnioSalida() << ' ' << co.getEstado() << ' ' co.getModelo();
}

#endif /* CONSOLAS_H */
