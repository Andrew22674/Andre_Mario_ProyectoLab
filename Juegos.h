#include <string>

using namespace std;


#ifndef JUEGOS_H
#define JUEGOS_H

class Juegos{
private:
    string nombre;
    int anio;
    string consola;
    int numJug;
    string genero;
    string estado;
    int nSerie;
    double precio;
    string compania;

public:
    Juegos();

    Juegos(string, int , string , int , string , string , int , double);

    int GetAnio();

    void SetAnio(int);

    string GetConsola();

    void SetConsola(string);

    string GetEstado();

    void SetEstado(string);

    string GetGenero();

    void SetGenero(string);

    int GetNSerie();

    void SetNSerie(int);

    string GetNombre();

    void SetNombre(string);

    int GetNumJug();

    void SetNumJug(int);

    double GetPrecio();

    void SetPrecio(double precio);

    string getCompania();

    void setCompania(string);

    ~Juegos();


};

#endif /* JUEGOS_H */
