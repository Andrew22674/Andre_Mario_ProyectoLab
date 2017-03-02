#pragma once

using namespace std;

class UsuarioVendedor{
public:
  UsuarioVendedor();
  UsuarioVendedor(string, string);

  string getHoraEntrada();
  string getHoraSalida();
  string getNombre();

private:
  string nombre;
  string hora_entrada;
  string hora_salida;
};
