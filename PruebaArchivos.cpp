#include <iostream>
#include <ctime>
#include <string.h>
#include <cstdarg>
#include <fstream>
#include <sstream>
#include <vector>

using namespace std;

std::string fmt(const std::string& fmt, ...) {
    int size = 200;
    std::string str;
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

void binario(){
    ofstream fout("./Binario/Data.AFe", ios::out | ios::binary);
    vector<int> enteros;
    enteros.push_back(1);
    enteros.push_back(2);
    enteros.push_back(3);
    enteros.push_back(4);
    enteros.push_back(5);
    //fout.open()
    //if (fout.is_open()) {
        std::cout << "Entre al if" << '\n';
        //while (!fout.eof()) {
            std::cout << "Entre al while" << '\n';
            for (int i = 0; i < enteros.size(); i++) {
                std::cout << "for " << i << '\n';
                fout.write((char*)&enteros[i], sizeof(int));
                //cout<< fout.get(entero[i])<<endl;
            }
            //fout.close();
        //}
        //fout.close();
        cout<<"copiado con exito";
    //}


}

void archivoVendedor() {
    ofstream outfile;
    time_t currentTime = time(0);
    tm* currentDate = localtime(&currentTime);
    char filename[256] = {0};

    stringstream temp3;
    temp3 << "Prueba" /*Aqui va el nombre del usuario*/ << "_%d-%d-%d.log";

    strcpy(filename, "./Usuarios_log/");
    strcat(filename, fmt(temp3.str(),
           currentDate->tm_hour, currentDate->tm_min, currentDate->tm_sec,
           currentDate->tm_mday, currentDate->tm_mon+1,
           currentDate->tm_year+1900).c_str());

    string temp, temp2;
    temp = fmt("%d-%d-%d",currentDate->tm_mday, currentDate->tm_mon+1,
    currentDate->tm_year+1900).c_str();
    temp2 = fmt("%d:%d:%d",currentDate->tm_hour, currentDate->tm_min, currentDate->tm_sec).c_str();
    stringstream  ss;
    ss << "\t\tGameHub\n\nFecha: " << temp << "\nHora: " << temp2 << "\nVendedor: " << " "/*QUITAR COMILLAS Agregar el getNombre del vendedor*/ << "\nCliente: " << " "/*QUITAR COMLLIAS Nombre del cliente*/ <<"\nCantidad de Articulos: "<< " "/*QUITAR COMLLIASCant de articulos*/ << "\n" << " "/*QUITAR COMLLIASRecorrer un for que tenga los articulos vendidos y mostrar su precio y su nombre*/ << "\nSubTotal: "<< " " /*QUITAR COMLLIAS Suma de los precios de los articulos*/
    << "\nImpuesto: " << " "/*QUITAR COMLLIAS precio por 15%*/ << "\nTotal: "<< " "/*QUITAR COMLLIAS suma*/;
    outfile.open(filename, std::ios::app);
    outfile << ss.str();
    outfile.close();
}



int main(){
    ofstream outfile;
    time_t currentTime = time(0);
    tm* currentDate = localtime(&currentTime);
    char filename[256] = {0};

    strcpy(filename, "./log_ventas/");
    strcat(filename, fmt("%d:%d:%d_%d-%d-%d.log",
           currentDate->tm_hour, currentDate->tm_min, currentDate->tm_sec,
           currentDate->tm_mday, currentDate->tm_mon+1,
           currentDate->tm_year+1900).c_str());

    string temp, temp2;
    temp = fmt("%d-%d-%d",currentDate->tm_mday, currentDate->tm_mon+1,
    currentDate->tm_year+1900).c_str();
    temp2 = fmt("%d:%d:%d",currentDate->tm_hour, currentDate->tm_min, currentDate->tm_sec).c_str();
    stringstream  ss;
    ss << "\t\tGameHub\n\nFecha: " << temp << "\nHora: " << temp2 << "\nVendedor: " << " "/*QUITAR COMILLAS Agregar el getNombre del vendedor*/ << "\nCliente: " << " "/*QUITAR COMLLIAS Nombre del cliente*/ <<"\nCantidad de Articulos: "<< " "/*QUITAR COMLLIASCant de articulos*/ << "\n" << " "/*QUITAR COMLLIASRecorrer un for que tenga los articulos vendidos y mostrar su precio y su nombre*/ << "\nSubTotal: "<< " " /*QUITAR COMLLIAS Suma de los precios de los articulos*/
    << "\nImpuesto: " << " "/*QUITAR COMLLIAS precio por 15%*/ << "\nTotal: "<< " "/*QUITAR COMLLIAS suma*/;
    outfile.open(filename, std::ios::app);
    outfile << ss.str();
    outfile.close();

    archivoVendedor();

    cout<<"1. Leer\n2. Escribir"<<endl;
    int opcion;
    cin>>opcion;
    switch (opcion) {
        case 1:{

            break;
        }
        case 2:{
            binario();
            break;
        }
    }

}
