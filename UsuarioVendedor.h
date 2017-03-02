#pragma once
#include <string>
using namespace std;

class UsuarioVendedor{
public:
  UsuarioVendedor();
  UsuarioVendedor(string, string);

  string getHoraEntrada();
  string getHoraSalida();
  string getNombre();

  void setHoraEntrada();
  void setHoraSalida();
  void setNombre();

private:
  string nombre;
  string hora_entrada;
  string hora_salida;
};
