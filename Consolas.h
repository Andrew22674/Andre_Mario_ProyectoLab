#include <iostream>
#include <string>

using namespace std;

#ifndef CONSOLAS_H
#define CONSOLAS_H
   
class Consolas{
    private:
        string marca;
        string nombre;
        string nSerie;
        int precio;
        string anioSalida;
        
public:
    Consolas();

    Consolas(string,string,string,int,string);

    string GetAnioSalida();

    void SetAnioSalida(string anioSalida);

    string GetMarca();

    void SetMarca(string marca);

    string GetNSerie();

    void SetNSerie(string nSerie);

    string GetNombre();

    void SetNombre(string nombre);

    int GetPrecio();

    void SetPrecio(int precio);

    ~Consolas();
};


#endif /* CONSOLAS_H */

