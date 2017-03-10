#include <iostream>
#include <string>
#include <vector>
#include <ctime>
#include <string.h>
#include <cstdarg>
#include <fstream>
#include <sstream>
#include <cstdlib>

#include <typeinfo>
#include "Consolas.h"
#include "Juegos.h"
#include "Sony.h"
#include "Microsoft.h"
#include "Nintendo.h"
#include "Bandai.h"
#include "Bugisoft.h"
#include "EA.h"
#include "JuegosMicrosoft.h"
#include "JuegosNintendo.h"
#include "JuegosSony.h"
#include "Konami.h"
#include "Sega.h"
#include "SquareEnix.h"
#include "UsuarioVendedor.h"
#include "UsuarioAdmin.h"
#include "Venta.h"
#include "ClaseAdmin.h"


using namespace std;

bool validarNumSerie(vector<Consolas*>, int);
bool numSerieJuegos(vector<Juegos*>, int);
void crearLogVenta(Venta*);
void crearLogVendedor(UsuarioVendedor*, int, int);
void addConsola(vector<Consolas*>, Consolas*);
string getHora();
void guardarConsolas(vector<Consolas>);
vector<Consolas> leerConsolas();

string fmt(const std::string& fmt, ...) {

    int size = 200;
    string str;
    va_list ap;
    while (1) {
        str.resize(size);
        va_start(ap, fmt);
        int n = vsnprintf((char*)str.c_str(), size, fmt.c_str(), ap);
        va_end(ap);
        if (n > -1 && n < size) {
            str.resize(n);
            return str;
        }
        if (n > -1)
            size = n + 1;
        else
            size *= 2;
    }
    return str;
}


int main(){

  //cout << typeid(Microsoft).name() << endl;
  //no se puede guardar los vectores asi no mas porque no se pueden guardar punteros de objetos porque cada vez que se corra el programa el objeto puede tener otra direccion en memoria
  vector<Consolas*> consolas;
  vector<UsuarioAdmin*> usuariosadmin;
  vector<Juegos*> videojuegos;
  ClaseAdmin* claseadmin = new ClaseAdmin();
  vector<Consolas> consolas2;
  int opcion = 0;
  int dinerousuario = 0, articulosvendidos = 0;


  cout << "Size de vector del archivo binario " << leerConsolas().size() << endl;
  //agregando objetos del archivo binario al vector de consolas
  for(int i =0; i < leerConsolas().size(); i++){
    Consolas consola = leerConsolas()[i];
    Consolas* consola_pointer = &consola;
    consolas.push_back(consola_pointer);
  }

  cout << "Size de vector de consolas: " << consolas.size() << endl;

  usuariosadmin.push_back(new UsuarioAdmin("Andre", "andre123"));

  //objetos de usuario para ingresar al sistema

  while(opcion != 3){
    cout << "MENU" << endl
    << "1. Ingresar al sistema (administrador)" << endl
    << "2. Ingresar al sistema (vendedores)" << endl
    << "3. Salir" << endl;

    cin >> opcion;

    if(opcion == 1){//usuario administrador
      bool usuarioingreso = false;
      cout << "Ingrese nombre de usuario" << endl;
      string usuario;
      cin >> usuario;
      cout << "Ingrese contrasena" << endl;
      string contrasena;
      cin >> contrasena;

      //usar un for para recorrer el vector y hallar el usuario y contrasena
      //si el ususario y contrasena son iguales, usuarioingreso = true

      for(int i = 0; i < usuariosadmin.size(); i++){
        if(usuario == usuariosadmin[i] -> getNombre() &&  contrasena == usuariosadmin[i] -> getContrasena()){
          usuarioingreso = true;
        }
      }

      if(usuarioingreso == true /*y que sea instancia de usuario administrador*/ ){
        int opcionadmin = 0;


        while(opcionadmin != 7){
            cout << "Menu usuario administrador" << endl
            << "1. Agregar nuevo usuario" << endl
            << "2. Agregar consolas/videojuegos" << endl
            << "3. Modificar usuarios" << endl
            << "4. Modificar consolas/videojuegos" << endl
            << "5. Eliminar usuarios"  << endl
            << "6. Eliminar consolas/videojuegos" << endl
            << "7. Menu principal" << endl;


            cin >> opcionadmin;

            if (opcionadmin == 1) {
              cout << "1. Agregar usuario administrador" << endl
              /*<< "2. Agregar usuario vendedor" << endl*/;

              int opcionusuario;
              cin >> opcionusuario;

              if(opcionusuario == 1){
                cout << "Ingrese nombre de usuario" << endl;
                string n_usuario;
                cin >> n_usuario;

                cout << "Ingrese contrasena de nuevo usuario" << endl;
                string n_contrasena;
                cin >> n_contrasena;

                usuariosadmin.push_back(new UsuarioAdmin(n_usuario, n_contrasena));
              }else if(opcionusuario == 2){

              }else{
                cout << "Opcion invalida";
              }
            } else if (opcionadmin == 2) {
              int agregarconsola;
              cout << "1. Agregar consola/s" << endl
              << "2. Agregar videojuego/s" << endl;
              cin >> agregarconsola;

              if(agregarconsola == 1){//agregar consola

                cout << "Cuantas consolas del mismo modelo quiere agregar?" << endl;
                int cantidadconsolas;
                cin >> cantidadconsolas;


                string marca, releasedate, modelo, estado;
                int numserie, op_marca;
                double precio;

                cout << "Marca" << endl
                << "1. Microsoft" << endl
                << "2. Sony" << endl
                << "3. Nintendo" << endl;
                cin >> op_marca;

                if(op_marca == 1){
                  marca = "Microsoft";
                }else if(op_marca == 2){
                  marca = "SONY";
                }else{
                  marca = "Nintendo";
                }

                cout << "Ingrese anio en que salio la consola" << endl;
                cin >> releasedate;
                cout << "Ingrese modelo" << endl;
                cin.ignore();
                getline(cin,modelo);
                cout << "Ingrese estado de la consola" << endl;
                cin >> estado;
                cout << "Ingrese precio" << endl;
                cin >> precio;
                int contador = 1;
                while(contador <= cantidadconsolas){
                  cout << "Ingrese numero de serie para consola " << contador << endl;
                  cin >> numserie;

                  //validar si el numero de serie ya existe
                  while(validarNumSerie(consolas, numserie)){
                    cout << "Numero de serie ya existe" << endl
                    << "Ingrese otro numero de serie" << endl;
                    cin >> numserie;
                  }

                  if(marca == "SONY"){
                    Sony* sony = new Sony(numserie, precio, releasedate, estado, modelo);
                    static_cast<Sony*> (sony);
                    consolas.push_back(sony);
                  }else if(marca == "Microsoft"){
                    Microsoft* microsoft = new Microsoft(numserie, precio, releasedate, estado, modelo);
                    static_cast<Microsoft*> (microsoft);
                    consolas.push_back(microsoft);
                  }else{
                    Nintendo* nintendo = new Nintendo(numserie, precio, releasedate, estado, modelo);
                    static_cast<Nintendo*> (nintendo);
                    consolas.push_back(nintendo);
                  }

                contador++;
                }





              }else if(agregarconsola == 2){//agregar videojuegos
                string nombre, consola, genero, estado;
                int jugadores, numserie, releasedate;
                double precio;

                cin.ignore();
                cout << "Ingrese nombre del juego" << endl;
                getline(cin,nombre);
                cout << "Ingrese anio en que salio el juego" << endl;
                cin >> releasedate;
                cout << "Ingrese para que consola esta disponible" << endl;
                cin.ignore();
                getline(cin,consola);
                cout << "Ingrese maximo numero de jugadores" << endl;
                cin >> jugadores;
                cout << "Ingrese genero del videojuego" << endl;
                cin >> genero;
                cout << "Ingrese estado del videojuego" << endl;
                cin >> estado;
                cout << "Ingrese precio" << endl;
                cin >> precio;


                cout << "Ingrese compania de videojuego" << endl;

                cout << "1. Microsoft" << endl <<
                "2. Sony" << endl <<
                "3. Nintendo" << endl <<
                "4. Bandai" << endl <<
                "5. Konami" << endl <<
                "6. Square Enix" << endl <<
                "7. EA" << endl <<
                "8. SEGA" << endl <<
                "9. Ubisoft" << endl;

                int opc_compania;
                cin >> opc_compania;

                while(opc_compania < 0 || opc_compania > 9){
                  cout << "Numero invalido, ingrese otro numero" << endl;
                  cin >> opc_compania;

                }
                string compania;
                if(opc_compania == 1){
                  compania = "Microsoft";
                }else if(opc_compania == 2){
                  compania = "Sony";
                }else if(opc_compania == 3){
                  compania = "Nintendo";
                }else if(opc_compania == 4){
                  compania = "Bandai";
                }else if(opc_compania == 5){
                  compania = "Konami";
                }else if(opc_compania == 6){
                  compania = "Square Enix";
                }else if(opc_compania == 7){
                  compania = "EA";
                }else if(opc_compania == 8){
                  compania = "SEGA";
                }else if(opc_compania == 9){
                  compania = "Ubisoft";
                }


                cout << "Ingrese numero de serie";
                cin >> numserie;


                while(numSerieJuegos(videojuegos, numserie)){
                  cout << "Numero de serie ya existe, ingrese otro numero" << endl;
                  cin >> numserie;
                }

                if(compania == "Microsoft"){
                  videojuegos.push_back(new JuegosMicrosoft(nombre,releasedate, consola, jugadores, genero, estado, numserie, precio));
                }else if(compania == "Sony"){
                  videojuegos.push_back(new JuegosSony(nombre,releasedate, consola, jugadores, genero, estado, numserie, precio));
                }else if(compania == "Nintendo"){
                  videojuegos.push_back(new JuegosNintendo(nombre,releasedate, consola, jugadores, genero, estado, numserie, precio));
                }else if(compania == "Bandai"){
                  videojuegos.push_back(new Bandai(nombre,releasedate, consola, jugadores, genero, estado, numserie, precio));
                }else if(compania == "Konami"){
                  videojuegos.push_back(new Konami(nombre,releasedate, consola, jugadores, genero, estado, numserie, precio));
                }else if(compania == "Square Enix"){
                  videojuegos.push_back(new SquareEnix(nombre,releasedate, consola, jugadores, genero, estado, numserie, precio));
                }if(compania == "EA"){
                  videojuegos.push_back(new EA(nombre,releasedate, consola, jugadores, genero, estado, numserie, precio));
                }else if(compania == "SEGA"){
                  videojuegos.push_back(new Sega(nombre,releasedate, consola, jugadores, genero, estado, numserie, precio));
                }else if(compania == "Ubisoft"){
                  videojuegos.push_back(new Bugisoft(nombre,releasedate, consola, jugadores, genero, estado, numserie, precio));
                }
              }else{
                cout << "Opcion invalida";
              }
            } else if (opcionadmin == 3) {//Modificar usuarios
              cout << "Ingrese indice de usuario que desea modificar " << endl;
              int index;
              cin >> index;

              UsuarioAdmin* ua = usuariosadmin.at(index);

              cout << "Ingrese nombre de usuario" << endl;
              string n_usuario;
              cin.ignore();
              getline(cin,n_usuario);

              cout << "Ingrese contrasena de nuevo usuario" << endl;
              string n_contrasena;
              cin >> n_contrasena;

              ua -> setNombre(n_usuario);
              ua -> setContrasena(n_contrasena);


            } else if (opcionadmin == 4) {//modificar consolas/videojuegos
              cout << "1. Modificar consolas" << endl
              << "2. Modificar videojuegos" << endl;

              int mod_cons;
              cin >> mod_cons;

              if(mod_cons == 1){

                cout << "Ingrese index de consola que desea modificar" << endl;
                int index;
                cin >> index;

                string marca, releasedate, modelo, estado;
                int numserie, op_marca;
                double precio;

                cout << "Marca" << endl
                << "1. Microsoft" << endl
                << "2. Sony" << endl
                << "3. Nintendo" << endl;
                cin >> op_marca;

                if(op_marca == 1){
                  marca = "Microsoft";
                }else if(op_marca == 2){
                  marca = "SONY";
                }else{
                  marca = "Nintendo";
                }

                cout << "Ingrese anio en que salio la consola" << endl;
                cin >> releasedate;
                cout << "Ingrese modelo" << endl;
                cin.ignore();
                getline(cin,modelo);
                cout << "Ingrese estado de la consola" << endl;
                cin >> estado;
                cout << "Ingrese precio" << endl;
                cin >> precio;
                cout << "Ingrese numero de serie" << endl;
                cin >> numserie;
                while(validarNumSerie(consolas, numserie)){
                  cout << "Numero de serie ya existe" << endl
                  << "Ingrese otro numero de serie" << endl;
                  cin >> numserie;
                }

                  if(marca == "SONY"){
                    consolas.at(index) = new Sony(numserie, precio, releasedate, estado, modelo);
                  }else if(marca == "Microsoft"){
                    consolas.at(index) = new Microsoft(numserie, precio, releasedate, estado, modelo);
                  }else{
                    consolas.at(index) = new Nintendo(numserie, precio, releasedate, estado, modelo);

                  }


              }else if(mod_cons == 2){//modificar videojuegos
                cout << "Ingrese indice de videojuego que desea modificar" << endl;
                int index;
                cin >> index;

                Juegos* videojuego = videojuegos.at(index);

                string nombre, consola, genero, estado;
                int jugadores, numserie, releasedate;
                double precio;

                cout << "Ingrese nombre del juego" << endl;
                cin.ignore();
                getline(cin,nombre);
                cout << "Ingrese anio en que salio el juego" << endl;
                cin >> releasedate;
                cout << "Ingrese para que consola esta disponible" << endl;
                cin.ignore();
                getline(cin,consola);
                cout << "Ingrese maximo numero de jugadores" << endl;
                cin >> jugadores;
                cout << "Ingrese genero del videojuego" << endl;
                cin >> genero;
                cout << "Ingrese estado del videojuego" << endl;
                cin >> estado;

                cout << "Ingrese compania de videojuego" << endl;

                cout << "1. Microsoft" << endl <<
                "2. Sony" << endl <<
                "3. Nintendo" << endl <<
                "4. Bandai" << endl <<
                "5. Konami" << endl <<
                "6. Square Enix" << endl <<
                "7. EA" << endl <<
                "8. SEGA" << endl <<
                "9. Ubisoft" << endl;

                int opc_compania;
                cin >> opc_compania;

                while(opc_compania < 0 || opc_compania > 9){
                  cout << "Numero invalido, ingrese otro numero" << endl;
                  cin >> opc_compania;

                }
                string compania;
                if(opc_compania == 1){
                  compania = "Microsoft";
                }else if(opc_compania == 2){
                  compania = "Sony";
                }else if(opc_compania == 3){
                  compania = "Nintendo";
                }else if(opc_compania == 4){
                  compania = "Bandai";
                }else if(opc_compania == 5){
                  compania = "Konami";
                }else if(opc_compania == 6){
                  compania = "Square Enix";
                }else if(opc_compania == 7){
                  compania = "EA";
                }else if(opc_compania == 8){
                  compania = "SEGA";
                }else if(opc_compania == 9){
                  compania = "Ubisoft";
                }


                cout << "Ingrese precio" << endl;
                cin >> precio;
                cout << "Ingrese numero de serie";
                cin >> numserie;


                while(numSerieJuegos(videojuegos, numserie)){
                  cout << "Numero de serie ya existe, ingrese otro numero" << endl;
                  cin >> numserie;

                }

                videojuego -> SetNombre(nombre);
                videojuego -> SetAnio(releasedate);
                videojuego -> SetConsola(consola);
                videojuego -> SetNumJug(jugadores);
                videojuego -> SetGenero(genero);
                videojuego -> SetEstado(estado);
                videojuego -> SetNSerie(numserie);
                videojuego -> SetPrecio(precio);
              }else{
                cout << "Opcion invalida";
              }
            } else if (opcionadmin == 5){//eliminar usuarios
              cout << "Ingrese index de usuario que desea eliminar";
              int index;
              cin >> index;

              usuariosadmin.erase(usuariosadmin.begin() + index);
            } else if (opcionadmin == 6) {//eliminar consolas/videojuegos
              cout << "1. Eliminar consola" << endl <<
              "2. Eliminar videojuego" << endl;

              int opc_cons;
              cin >> opc_cons;


              if(opc_cons == 1){
                  cout << "Ingrese indice de consola que desea eliminar" << endl;
                  int index;
                  cin >> index;

                  consolas.erase(consolas.begin() + index);
              }else if(opc_cons == 2){
                cout << "Ingrese indice de videojuego que desea eliminar" << endl;
                int index;
                cin >> index;

                videojuegos.erase(videojuegos.begin() + index);
              }else{
                cout << "Opcion invalida" << endl;
              }
            } else{
              cout << "Ingreso un numero invalido" << endl;
            }
          }

        }
        else{
        cout << "El usuario o contrasena es incorrecta" << endl;
      }
    }else if(opcion == 2){//usuario vendedor

      /*time_t t = time(0);
      struct tm * fechahora = localtime( & t );

      int hora = fechahora -> tm_hour;
      int min = fechahora -> tm_min;
      int seg = fechahora -> tm_sec;

      string hora_ent = "" + hora;// + ":" + min + ":" + seg;*/



      string nombre;
      cout << "Ingrese nombre" << endl;
      cin.ignore();
      getline(cin,nombre);
      UsuarioVendedor* usuario_v = new UsuarioVendedor(nombre, getHora());

      int opcionvendedor = 0;

      while (opcionvendedor != 3) {
        cout << "Menu usuario vendedor" << endl
        << "1. Agregar consolas/videojuegos" << endl
        << "2. Vender" << endl
        << "3. Regresar al menu principal" << endl;

        cin >> opcionvendedor;

        if(opcionvendedor == 1){
          cout << "1. Agregar consolas" << endl
          << "2. Agregar videojuegos" << endl;

          int opcionconsola;
          cin >> opcionconsola;

          if(opcionconsola == 1){//agregar consolas
            cout << "Cuantas consolas del mismo modelo quiere agregar?" << endl;
            int cantidadconsolas;
            cin >> cantidadconsolas;


            string marca, releasedate, modelo, estado;
            int numserie, op_marca;
            double precio;

            cout << "Marca" << endl
            << "1. Microsoft" << endl
            << "2. Sony" << endl
            << "3. Nintendo" << endl;
            cin >> op_marca;

            if(op_marca == 1){
              marca = "Microsoft";
            }else if(op_marca == 2){
              marca = "SONY";
            }else{
              marca = "Nintendo";
            }

            cout << "Ingrese anio en que salio la consola" << endl;
            cin >> releasedate;
            cout << "Ingrese modelo" << endl;
            cin.ignore();
            getline(cin,modelo);
            cout << "Ingrese estado de la consola" << endl;
            cin >> estado;
            cout << "Ingrese precio" << endl;
            cin >> precio;
            int contador = 1;
            while(contador <= cantidadconsolas){
              cout << "Ingrese numero de serie para consola " << contador << endl;
              cin >> numserie;

              //validar si el numero de serie ya existe
              while(validarNumSerie(consolas, numserie)){
                cout << "Numero de serie ya existe" << endl
                << "Ingrese otro numero de serie" << endl;
                cin >> numserie;
              }


              if(marca == "SONY"){
                Consolas consola(numserie, precio, releasedate, estado, modelo);
                consolas2.push_back(consola);
                Consolas* sony = new Sony(numserie, precio, releasedate, estado, modelo);
                consolas.push_back(sony);
              }else if(marca == "Microsoft"){
                Microsoft* microsoft = new Microsoft(numserie, precio, releasedate, estado, modelo);
                consolas.push_back(microsoft);
                static_cast<Microsoft*> (consolas.back());
              }else{
                Nintendo* nintendo = new Nintendo(numserie, precio, releasedate, estado, modelo);
                consolas.push_back(nintendo);
                static_cast<Nintendo*> (consolas.back());
              }
            contador++;
            }



          }else if(opcionconsola == 2){//agregar videojuegos
            string nombre, consola, genero, estado;
            int jugadores, numserie, releasedate;
            double precio;

            cout << "Ingrese nombre del juego" << endl;
            cin.ignore();
            getline(cin,nombre);
            cout << "Ingrese anio en que salio el juego" << endl;
            cin >> releasedate;
            cout << "Ingrese para que consola esta disponible" << endl;
            cin.ignore();
            getline(cin,consola);
            cout << "Ingrese maximo numero de jugadores" << endl;
            cin >> jugadores;
            cout << "Ingrese genero del videojuego" << endl;
            cin >> genero;
            cout << "Ingrese estado del videojuego" << endl;
            cin >> estado;
            cout << "Ingrese precio" << endl;
            cin >> precio;

            cout << "Ingrese numero de serie" << endl;
            cin >> numserie;


            while(numSerieJuegos(videojuegos, numserie)){
              cout << "Numero de serie ya existe, ingrese otro numero" << endl;
              cin >> numserie;

            }

            Juegos* vj = new Juegos(nombre,releasedate, consola, jugadores, genero, estado, numserie, precio);
            videojuegos.push_back(vj);


          }else{
            cout << "Opcion invalida" << endl;
          }
        }else if(opcionvendedor == 2){//Vender
          usuario_v -> vender();
          cout << "Ingrese nombre de cliente" << endl;
          string nombre_cliente;
          cin.ignore();
          getline(cin, nombre_cliente);

          time_t t = time(0);
          struct tm * fechahora = localtime( & t );

          int hora = fechahora -> tm_hour;
          int min = fechahora -> tm_min;

          stringstream ss;
          ss << hora << ":" << min;

          string hora_actual = ss.str();
          Venta* venta = new Venta(nombre_cliente, hora_actual , usuario_v -> getNombre());
          string add_cons_o_video = "s";

          while(add_cons_o_video == "s" || add_cons_o_video == "S"){
            cout << "1. Vender consolas\n2. Vender video juegos" << endl;
            int opc_vender;
            cin >> opc_vender;


            if(opc_vender == 1){

              string seguir = "s";

              while(seguir == "s" || seguir == "S"){
                  cout << "Que marca de consola desea vender?" << endl;
                  cout << "1. Microsoft" << endl
                  << "2. Sony" << endl
                  << "3. Nintendo" << endl;

                  int opc_marca;
                  cin >> opc_marca;

                  if(opc_marca == 1){

                    cout << "Consolas de Microsoft: " << endl;
                    for(int i =0; i< consolas.size(); i++){
                      if(/*((Microsoft*) consolas.at(i))*/typeid(*consolas[i]).name() == typeid(Microsoft).name()){
                        cout << i << " " << ((Microsoft*)consolas[i]) -> getModelo() << endl;
                      }
                    }

                  }else if(opc_marca == 2){
                    cout << "Consolas de Sony: " << endl;
                    for(int i =0; i< consolas.size(); i++){
                      if(typeid(*consolas[i]) == typeid(Sony)){
                        cout << i << " " << ((Sony*)consolas[i]) -> getModelo() << endl;
                      }

                    }
                  }else if(opc_marca == 3){
                    cout << "Consolas de Nintendo: " << endl;
                    for(int i =0; i< consolas.size(); i++){
                      if(typeid(*consolas[i]) == typeid(Nintendo)){
                        cout << i << " " << ((Nintendo*)consolas[i]) -> getModelo() << endl;
                      }
                    }
                  }else{
                    cout << "Ingreso una opcion invalida" << endl;
                  }

                cout << "Ingrese indice de consola que desea agregar al carrito" << endl;
                int index;
                cin >> index;

                while(index < 0 || index > consolas.size() - 1){
                  cout << "Ingreso indice fuera del rango del size de consolas, ingrese otro numero" << endl;
                  cin >> index;
                }



                //cons.push_back(consolas[index]);
                venta -> setConsola(consolas[index]);
                consolas.erase(consolas.begin() + index);

                cout << "Desea seguir agregando consolas al carrito[s/n]" << endl;
                cin >> seguir;

              }

            }else if(opc_vender == 2){
              string seguir = "s";

              while(seguir == "s" || seguir == "S"){
                cout << "Ingrese compania de videojuegos que desea agregar al carrito" << endl;
                cout << "1. Microsoft" << endl <<
                "2. Sony" << endl <<
                "3. Nintendo" << endl <<
                "4. Bandai" << endl <<
                "5. Ubisoft" << endl <<
                "6. Konami" << endl <<
                "7. EA" << endl <<
                "8. SEGA" << endl <<
                "9. Square Enix" << endl;

                int opc_vid;
                cin >> opc_vid;

                if(opc_vid == 1){
                  for(int i = 0; i<videojuegos.size(); i++){
                    if(typeid(*videojuegos[i]).name() == typeid(JuegosMicrosoft).name()){
                      cout << i << " " << videojuegos[i] -> GetNombre() << endl;
                    }
                  }
                }else if(opc_vid == 2){
                  for(int i = 0; i<videojuegos.size(); i++){
                    if(typeid(*videojuegos[i]).name() == typeid(JuegosSony).name()){
                      cout << i << " " << videojuegos[i] -> GetNombre() << endl;
                    }
                  }
                }else if(opc_vid == 3){
                  for(int i = 0; i<videojuegos.size(); i++){
                    if(typeid(*videojuegos[i]).name() == typeid(JuegosNintendo).name()){
                      cout << i << " " << videojuegos[i] -> GetNombre() << endl;
                    }
                  }
                }else if(opc_vid == 4){
                  for(int i = 0; i<videojuegos.size(); i++){
                    if(typeid(*videojuegos[i]).name() == typeid(Bandai).name()){
                      cout << i << " " << videojuegos[i] -> GetNombre() << endl;
                    }
                  }
                }else if(opc_vid == 5){
                  for(int i = 0; i<videojuegos.size(); i++){
                    if(typeid(*videojuegos[i]).name() == typeid(Bugisoft).name()){
                      cout << i << " " << videojuegos[i] -> GetNombre() << endl;
                    }
                  }
                }else if(opc_vid == 6){
                  for(int i = 0; i<videojuegos.size(); i++){
                    if(typeid(*videojuegos[i]).name() == typeid(Konami).name()){
                      cout << i << " " << videojuegos[i] -> GetNombre() << endl;
                    }
                  }
                }else if(opc_vid == 7){
                  for(int i = 0; i<videojuegos.size(); i++){
                    if(typeid(*videojuegos[i]).name() == typeid(EA).name()){
                      cout << i << " " << videojuegos[i] -> GetNombre() << endl;
                    }
                  }
                }else if(opc_vid == 8){
                  for(int i = 0; i<videojuegos.size(); i++){
                    if(typeid(*videojuegos[i]).name() == typeid(Sega).name()){
                      cout << i << " " << videojuegos[i] -> GetNombre() << endl;
                    }
                  }
                }else if(opc_vid == 9){
                  for(int i = 0; i<videojuegos.size(); i++){
                    if(typeid(*videojuegos[i]).name() == typeid(SquareEnix).name()){
                      cout << i << " " << videojuegos[i] -> GetNombre() << endl;
                    }
                  }
                }



                cout << "Ingrese indice de video juego que desea agregar al carrito" << endl;
                int index;
                cin >> index;

                venta -> setJuego(videojuegos[index]);
                videojuegos.erase(videojuegos.begin() + index);
                cout << "Dese seguir agregando videojuegos al carrito[s/n]" << endl;
                cin >> seguir;
              }

            }

            cout << "Desea seguir agregando consolas o videojuegos al carrito[s/n]" << endl;
            cin >> add_cons_o_video;

          }
          dinerousuario += (venta -> getSubtotal() * 0.15) + venta -> getSubtotal();
          articulosvendidos += venta -> getCantidadArticulos();
          crearLogVenta(venta);


        }else if(opcionvendedor == 3){
          cout << endl;
        }else{
          cout << "Opcion invalida" << endl;
        }
      }
      usuario_v -> setHoraSalida(getHora());
      crearLogVendedor(usuario_v, articulosvendidos, dinerousuario);
      articulosvendidos = 0, dinerousuario = 0;
      delete usuario_v;



    }



  }
  guardarConsolas(consolas2);

  return 0;
}





//validar si numero de serie ya existe
bool validarNumSerie(vector<Consolas*> consolas, int numserie){
  bool ya_existe = false;

  for(int i = 0; i < consolas.size(); i++){
    if(numserie == consolas[i] -> GetNSerie()){//si el numero de serie es igual al numero de serie de la consola en indice "i" del vector consolas
      ya_existe = true;
      break;
    }else{
      ya_existe = false;
    }
  }

  return ya_existe;
}


bool numSerieJuegos(vector<Juegos*> juegos, int numserie){
  bool ya_existe = false;

  for(int i = 0; i < juegos.size(); i++){
    if(numserie == juegos[i] -> GetNSerie()){
      ya_existe = true;
      break;
    }else{
      ya_existe = false;
    }
  }

  return ya_existe;
}


void crearLogVenta(Venta* venta){
  ofstream outfile;
  time_t currentTime = time(0);
  tm* currentDate = localtime(&currentTime);
  char filename[256] = {0};

  const int directorio = system("mkdir ./log_ventas");
  if(directorio == -1){

  }
  strcpy(filename, "./log_ventas/");
  strcat(filename, fmt("%d:%d:%d_%d-%d-%d.log",
         currentDate->tm_hour, currentDate->tm_min, currentDate->tm_sec,
         currentDate->tm_mday, currentDate->tm_mon+1,
         currentDate->tm_year+1900).c_str());

  string fecha, hora;
  fecha = fmt("%d-%d-%d",currentDate->tm_mday, currentDate->tm_mon+1,
  currentDate->tm_year+1900).c_str();
  hora = fmt("%d:%d:%d",currentDate->tm_hour, currentDate->tm_min, currentDate->tm_sec).c_str();
  stringstream  ss;
  double impuesto = venta -> getSubtotal() * .15;
  double total = venta -> getSubtotal() + impuesto;
  ss << "\t\tGameHub\n\nFecha: " << fecha << "\nHora: " << hora << "\nVendedor: " << venta -> getUsuario() << "\nCliente: " << venta -> getNombreCliente() <<"\n\nCantidad de Articulos: "<< venta -> getCantidadArticulos() << "\n\n";


  for(int i = 0; i < venta -> getSizeConsolas(); i++){
    ss << venta -> GetConsola(i) << "\n";
  }

  for(int i = 0; i < venta -> getSizeJuegos(); i++){
    ss << venta -> getJuego(i) << "\n";
  }

  ss << "\nSubTotal: "<< venta -> getSubtotal() << "\nImpuesto: " << impuesto << "\nTotal: "<< total;
  outfile.open(filename, std::ios::app);
  outfile << ss.str();
  outfile.close();

}

void crearLogVendedor(UsuarioVendedor* usuario, int cantidadarticulos, int dinero){
  ofstream outfile;
  char filename[256] = {0};
  time_t currentTime = time(0);
  tm* currentDate = localtime(&currentTime);
  const int directorio = system("mkdir ./Usuarios_log");
  strcpy(filename, "./Usuarios_log/");
  strcat(filename, fmt("%s_%d-%d-%d.log",
         usuario -> getNombre().c_str(),
         currentDate->tm_mday, currentDate->tm_mon+1,
         currentDate->tm_year+1900).c_str());
  stringstream ss;

  ss << "\t\tGameHub\n\nNombre: " << usuario -> getNombre() << "\nHora entrada: " << usuario -> getHoraEntrada() << "\nHora salida: "
  << usuario -> getHoraSalida() << "\n\nCantidad de articulos vendidos: " << cantidadarticulos << "\nDinero generado: " << dinero << "\n\n";

  outfile.open(filename, std::ios::app);
  outfile << ss.str();
  outfile.close();
}

void addConsola(vector<Consolas*> consolas, Consolas* consola){
  consolas.push_back(consola);
}


string getHora(){
  time_t t = time(0);
  struct tm * fechahora = localtime( & t );

  int hora = fechahora -> tm_hour;
  int min = fechahora -> tm_min;

  stringstream ss;
  ss << hora << ":" << min;

  return ss.str();
}


void guardarConsolas(vector<Consolas> consolas){
    ofstream fout("./Binario/DataConsolas.bin", ios::out | ios::binary);
    //fout.open()
    //if (fout.is_open()) {
        std::cout << "Entre al if" << '\n';
        //while (!fout.eof()) {
            //std::cout << "Entre al while" << '\n';
            //std::cout << "Enteros size: "<< enteros.size() << '\n';
            int size1 = consolas.size();
                fout.write((char*)&size1, sizeof(size1));
                fout.write((char*)consolas.data(), size1 * sizeof(int));

            //fout.close();
        //}
        //fout.flush();
        fout.close();
        cout<<"copiado con exito"<<endl;
    //}


}

vector<Consolas> leerConsolas(){
  vector<Consolas> list2;

  ifstream is("./Binario/DataConsolas.bin", ios::binary);
      int size2;
      is.read((char*)&size2, 4);
      list2.resize(size2);

       // Is it safe to read a whole array of structures directly into the vector?
      is.read((char*)&list2[0], size2 * sizeof(list2));

      //std::cout << "Size del vector: " << list2.size() <<endl;
      /*for (int i = 0; i < list2.size(); i++) {
          std::cout << i << ". " << list2[i] << '\n';

      }*/
      //std::cout << "Antes de cerrar" << '\n';
      is.close();

      return list2;
}
