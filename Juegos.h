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
    string nSerie;
    int precio;

public:
    Juegos();

    Juegos(string, int , string , int , string , string , string , int);

    int GetAnio();

    void SetAnio(int);

    string GetConsola();

    void SetConsola(string);

    string GetEstado();

    void SetEstado(string);

    string GetGenero();

    void SetGenero(string);

    string GetNSerie();

    void SetNSerie(string);

    string GetNombre();

    void SetNombre(string);

    int GetNumJug();

    void SetNumJug(int);

    int GetPrecio();

    void SetPrecio(int precio);

    ~Juegos();


};

#endif /* JUEGOS_H */
