#include <iostream>
#include <string>
#include <vector>
#include <ctime>

using namespace std;

//bool validarNumSerie(vector<Consola*>, int);

int main(){
  //vector<Consola*> consolas;
  int opcion = 0;

  //objetos de usuario para ingresar al sistema

  while(opcion != 3){
    cout << "MENU" << endl
    << "1. Ingresar al sistema (administrador)" << endl
    << "2. Ingresar al sistema (vendedores)" << endl
    << "3. Salir" << endl;

    cin >> opcion;

    if(opcion == 1){
      bool usuarioingreso = false;
      cout << "Ingrese nombre de usuario" << endl;
      string usuario;
      cin >> usuario;
      cout << "Ingrese contrasena" << endl;
      string contrasena;
      cin >> contrasena;

      //usar un for para recorrer el vector y hallar el usuario y contrasena
      //si el ususario y contrasena son iguales, usuarioingreso = true

      if(usuarioingreso == true /*y que sea instancia de usuario administrador*/ ){
        cout << "Menu usuario administrador" << endl
        << "1. Agregar nuevo usuario" << endl
        << "2. Agregar consolas/videojuegos" << endl
        << "3. Modificar usuarios" << endl
        << "4. Modificar consolas/videojuegos" << endl
        << "5. Eliminar usuarios"  << endl
        << "6. Eliminar consolas/videojuegos" << endl;

        int opcionadmin;
        cin >> opcionadmin;

        if (opcionadmin == 1) {
          cout << "1. Agregar usuario administrador" << endl
          << "2. Agregar usuario vendedor" << endl;

          int opcionusuario;
          cin >> opcionusuario;

          if(opcionusuario == 1){
            cout << "Ingrese nombre de usuario" << endl;
            string n_usuario;
            cin >> n_usuario;

            cout << "Ingrese contrasena de nuevo usuario" << endl;
            string n_contrasena;
            cin >> n_contrasena;

            //vector<Usuario> usuarios.push_back(new Usuario(n_usuario, n_contrasena));
          }else if(opcionusuario == 2){

          }else{
            cout << "Opcion invalida";
          }
        } else if (opcionadmin == 2) {
          int agregarconsola;
          cout << "1. Agregar consola/s" << endl
          << "2. Agregar videojuego/s" << endl;
          cin >> agregarconsola;

          if(agregarconsola == 1){

            cout << "Cuantas consolas del mismo modelo quiere agregar?" << endl;
            int cantidadconsolas;
            cin >> cantidadconsolas;


            string releasedate, modelo, estado;
            int numserie;
            double precio;

            cout << "Ingrese anio en que salio la consola" << endl;
            cin >> releasedate;
            cout << "Ingrese modelo" << endl;
            cin >> modelo;
            cout << "Ingrese precio";
            cin >> precio;
            int contador = 1;
            while(contador <= cantidadconsolas){
              cout << "Ingrese numero de serie para consola " << contador << endl;
              cin >> numserie;

              //validar si el numero de serie ya existe
              /*while(validarNumSerie(consolas, numserie)){
                cout << "Numero de serie ya existe" << endl
                << "Ingrese otro numero de serie" << endl;
                cin >> numserie;
              }*/
              //consolas.push_back(new Consola(releasedate, modelo, estado, numserie, precio));
              contador++;
            }





          }else if(agregarconsola == 2){//agregar videojuegos
            string nombre, releasedate, consola, genero, estado;
            int jugadores, numserie;
            double precio;

            cout << "Ingrese nombre del juego" << endl;
            cin >> nombre;
            cout << "Ingrese anio en que salio el juego" << endl;
            cin >> releasedate;
            cout << "Ingrese para que consola esta disponible" << endl;
            cin >> consola;
            cout << "Ingrese maximo numero de jugadores" << endl;
            cin >> jugadores;
            cout << "Ingrese genero del videojuego" << endl;
            cin >> genero;
            cout << "Ingrese estado del videojuego" << endl;
            cin >> estado;

            cout << "Ingrese numero de serie";
            cin >> numserie;

            /*
            while(numSerieJuegos(juegos, numserie)){
              cout << "Numero de serie ya existe, ingrese otro numero" << endl;
              cin >> numserie;
              Videojuego* vj = new Videojuego(nombre,releasedate, consola, jugadores, genero, estado, numserie);
              videojuegos.push_back(vj);
            }


            */

          }else{
            cout << "Opcion invalida";
          }
        } else if (opcionadmin == 3) {
          /* code */
        } else if (opcionadmin == 4) {
          /* code */
        } else if (opcionadmin == 5) {
          /* code */
        } else if (opcionadmin == 6) {
          /* code */
        } else{
          cout << "Ingreso un numero invalido" << endl;
        }
      }else{
        cout << "El usuario o contrasena es incorrecta" << endl;
      }
    }else if(opcion == 2){


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


            string releasedate, modelo, estado;
            int numserie;
            double precio;

            cout << "Ingrese anio en que salio la consola" << endl;
            cin >> releasedate;
            cout << "Ingrese modelo" << endl;
            cin >> modelo;
            cout << "Ingrese precio" << endl;
            cin >> precio;
            int contador = 1;
            while(contador <= cantidadconsolas){
              cout << "Ingrese numero de serie para consola " << contador << endl;
              cin >> numserie;

              //validar si el numero de serie ya existe
              /*while(validarNumSerie(consolas, numserie)){
                cout << "Numero de serie ya existe" << endl
                << "Ingrese otro numero de serie" << endl;
                cin >> numserie;
              }*/
              //consolas.push_back(new Consola(releasedate, modelo, estado, numserie, precio));
              contador++;
            }



          }else if(opcionconsola == 2){//agregar videojuegos
            string nombre, releasedate, consola, genero, estado;
            int jugadores, numserie;
            double precio;

            cout << "Ingrese nombre del juego" << endl;
            cin >> nombre;
            cout << "Ingrese anio en que salio el juego" << endl;
            cin >> releasedate;
            cout << "Ingrese para que consola esta disponible" << endl;
            cin >> consola;
            cout << "Ingrese maximo numero de jugadores" << endl;
            cin >> jugadores;
            cout << "Ingrese genero del videojuego" << endl;
            cin >> genero;
            cout << "Ingrese estado del videojuego" << endl;
            cin >> estado;

            cout << "Ingrese numero de serie";
            cin >> numserie;

            /*
            while(numSerieJuegos(juegos, numserie)){
              cout << "Numero de serie ya existe, ingrese otro numero" << endl;
              cin >> numserie;
              Videojuego* vj = new Videojuego(nombre,releasedate, consola, jugadores, genero, estado, numserie);
              videojuegos.push_back(vj);
            }


            */

          }else{
            cout << "Opcion invalida" << endl;
          }
        }else if(opcionvendedor == 2){//Vender

        }else if(opcionvendedor == 3){
          cout << endl;
        }else{
          cout << "Opcion invalida" << endl;
        }
      }


    }



  }
  /* fecha y tiempo
  time_t t = time(0);
  struct tm * fechahora = localtime( & t );

  int dia = fechahora -> tm_mday;
  int mes = fechahora -> tm_mon + 1;
  int anio = fechahora -> tm_year + 1900;

  int hora = fechahora -> tm_hour;
  int min = fechahora -> tm_min;
  int seg = fechahora -> tm_sec;

  //cout << (fecha->tm_year + 1900) << "-" << (fecha->tm_mon + 1) << "-" <<  fecha->tm_mday << endl;
  cout << dia << "-" << mes << "-" << anio << "  " << hora << ":" << min << ":" << seg << endl;
  */



  return 0;
}





//validar si numero de serie ya existe
/*bool validarNumSerie(vector<Consola*> consolas, int numserie){
  bool ya_existe = false;

  for(int i = 0; i < consolas.size(); i++){
    if(numerie == consolas[i] -> getNumserie()){
      ya_existe = true;
      break;
    }else{
      ya_existe = false;
    }
  }

  return ya_existe;
}*/
