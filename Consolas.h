#include <iostream>
#include <string>

using namespace std;

#ifndef CONSOLAS_H
#define CONSOLAS_H

class Consolas{
    private:
        string marca;
        string nSerie;
        int precio;
        string anioSalida;
        string estado;

public:
    Consolas();

    Consolas(string,string,int,string,string);

    string GetAnioSalida();

    void SetAnioSalida(string anioSalida);

    string GetMarca();

    void SetMarca(string marca);

    string GetNSerie();

    void SetNSerie(string nSerie);

    int GetPrecio();

    void SetPrecio(int precio);

    string getEstado();

    void setEstado(string);

    ~Consolas();
};


#endif /* CONSOLAS_H */
