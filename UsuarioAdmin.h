#pragma once

using namespace std;

class UsuarioAdmin{
public:
  UsuarioAdmin();
  UsuarioAdmin(string,string);

  string getNombre();
  void setNombre(string);

  string getContrasena();
  void setContrasena(string);

private:
  string nombre;
  string contrasena;
};
