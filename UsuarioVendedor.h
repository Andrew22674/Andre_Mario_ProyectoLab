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

  void setHoraEntrada(string);
  void setHoraSalida(string);
  void setNombre(string);

  void vender();

private:
  string nombre;
  string hora_entrada;
  string hora_salida;
};
