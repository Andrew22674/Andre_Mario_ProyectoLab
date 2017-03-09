#pragma once
#include "Juegos.h"
#include <string>

class Konami :  public Juegos{
private:


public:
    Konami ();
    Konami(string, int , string , int , string , string , int , double);
    ~Konami ();
};
