#include <string>

#include <boost/serialization/vector.hpp>

#include <boost/archive/text_oarchive.hpp>
#include <boost/archive/text_iarchive.hpp>

#include <boost/archive/polymorphic_binary_iarchive.hpp>
#include <boost/archive/polymorphic_binary_oarchive.hpp>

#include <boost/serialization/base_object.hpp>


using namespace std;


#ifndef JUEGOS_H
#define JUEGOS_H

class Juegos{
  friend class boost::serialization::access;

  template<class Archive>
   void serialize(Archive &ar, const unsigned int version)
   {
       ar & nombre;
       ar & anio;
       ar & consola;
       ar & numJug;
       ar & genero;
       ar & estado;
       ar & nSerie;
       ar & precio;
   }
private:
    string nombre;
    int anio;
    string consola;
    int numJug;
    string genero;
    string estado;
    int nSerie;
    double precio;


public:
    Juegos();

    Juegos(string, int , string , int , string , string , int , double);

    virtual int GetAnio();

    virtual void SetAnio(int);

    virtual string GetConsola();

    virtual void SetConsola(string);

    virtual string GetEstado();

    virtual void SetEstado(string);

    virtual string GetGenero();

    virtual void SetGenero(string);

    virtual int GetNSerie();

    virtual void SetNSerie(int);

    virtual string GetNombre();

    virtual void SetNombre(string);

    virtual int GetNumJug();

    virtual void SetNumJug(int);

    virtual double GetPrecio();

    virtual void SetPrecio(double precio);

    ~Juegos();


};

#endif /* JUEGOS_H */
