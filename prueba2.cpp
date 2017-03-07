

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
fecha = fmt("%d-%d-%d",currentDate->tm_mday, currentDate->tm_mon+1,
currentDate->tm_year+1900).c_str();
hora = fmt("%d:%d:%d",currentDate->tm_hour, currentDate->tm_min, currentDate->tm_sec).c_str();
stringstream  ss;
double impuesto = venta -> getSubtotal() * .15;
double total = venta -> getSubtotal() + impuesto;
ss << "\t\tGameHub\n\nFecha: " << fecha << "\nHora: " << hora << "\nVendedor: " << venta -> getUsuario() << "\nCliente: " << venta -> getNombreCliente() <<"\n\nCantidad de Articulos: "<< venta -> getCantidadArticulos() << "\n\n";


for(int i = 0; i < venta -> getSizeConsolas(); i++){
  ss << venta(getConsola(i)) << "\n";
}

for(int i = 0; i < venta -> getSizeJuegos(); i++){
  ss << venta(getJuego(i)) << "\n";
}

ss << "\nSubTotal: "<< venta -> getSubtotal() << "\nImpuesto: " << impuesto << "\nTotal: "<< total;
outfile.open(filename, std::ios::app);
outfile << ss.str();
outfile.close();
}
