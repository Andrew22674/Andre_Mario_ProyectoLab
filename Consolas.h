#include <iostream>
#include <string>
#include <boost/serialization/vector.hpp>

#include <boost/archive/text_oarchive.hpp>
#include <boost/archive/text_iarchive.hpp>

#include <boost/archive/polymorphic_binary_iarchive.hpp>
#include <boost/archive/polymorphic_binary_oarchive.hpp>

#include <boost/serialization/base_object.hpp>


using namespace std;

#ifndef CONSOLAS_H
#define CONSOLAS_H

class Consolas{

  friend class boost::serialization::access;

  template<class Archive>
   void serialize(Archive &ar, const unsigned int version)
   {
       ar & nSerie;
       ar & precio;
       ar & anioSalida;
       ar & estado;
       ar & modelo;
   }
private:
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

  friend std::ostream & operator<<(std::ostream &os, Consolas &co)
  {
      return os << co.GetNSerie() << co.GetPrecio() << ' ' << co.GetAnioSalida() << ' ' << co.getEstado() << ' ' << co.getModelo();
  }


  ~Consolas();
};



#endif /* CONSOLAS_H */
