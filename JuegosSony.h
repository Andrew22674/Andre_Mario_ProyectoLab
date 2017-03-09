#pragma once
#include "Juegos.h"
#include <string>

class JuegosSony :  public Juegos{
private:


public:
    JuegosSony ();
    JuegosSony(string, int , string , int , string , string , int , double);
    ~JuegosSony ();
};
