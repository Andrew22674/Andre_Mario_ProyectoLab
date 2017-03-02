

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
    Juegos::Juegos() {
    }

    Juegos::Juegos(string, int , string , int , string , string , string , int);
    }

    int Juegos::GetAnio();

    void Juegos::SetAnio(int);

    string Juegos::GetConsola();

    void Juegos::SetConsola(string);

    string Juegos::GetEstado();

    void Juegos::SetEstado(string);

    string Juegos::GetGenero();

    void Juegos::SetGenero(string);

    string Juegos::GetNSerie();

    void Juegos::SetNSerie(string);

    string Juegos::GetNombre();

    void Juegos::SetNombre(string);

    int Juegos::GetNumJug();

    void Juegos::SetNumJug(int);

    int Juegos::GetPrecio();

    void Juegos::SetPrecio(int precio);

    ~Juegos();
    
    
};

#endif /* JUEGOS_H */

