#include <iostream>
#include <ctime>
#include <string.h>
#include <cstdarg>
#include <fstream>
#include <sstream>


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

}
