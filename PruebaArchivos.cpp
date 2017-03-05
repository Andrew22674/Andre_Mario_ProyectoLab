#include <iostream>
#include <ctime>
#include <string.h>
#include <cstdarg>
#include <fstream>


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

strcpy(filename, "/home/fenix/Desktop/Andre_Mario_ProyectoLab/log_ventas/");
strcat(filename, fmt("%d:%d:%d_%d-%d-%d.log",
       currentDate->tm_hour, currentDate->tm_min, currentDate->tm_sec,
       currentDate->tm_mday, currentDate->tm_mon+1,
       currentDate->tm_year+1900).c_str());

outfile.open(filename, std::ios::app);
outfile << "Prueba";
outfile.close();
}
