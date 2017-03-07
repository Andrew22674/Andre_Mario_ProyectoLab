Proyecto:	main.o Consolas.o Microsoft.o Sony.o Nintendo.o UsuarioAdmin.o UsuarioVendedor.o Juegos.o Venta.o
	g++ main.o Consolas.o Microsoft.o Sony.o Nintendo.o UsuarioAdmin.o UsuarioVendedor.o Juegos.o Venta.o -o Proyecto

main.o:	main.cpp Consolas.h Microsoft.h Sony.h Nintendo.h UsuarioAdmin.h UsuarioVendedor.h Juegos.h
	g++ -c main.cpp

Venta.o: Venta.cpp Venta.h Juegos.h Consolas.h
	g++ -c Venta.cpp

Microsoft.o:	Microsoft.cpp Microsoft.h Consolas.h
	g++ -c Microsoft.cpp

Sony.o:	Sony.cpp Sony.h Consolas.h
	g++ -c Sony.cpp

Nintendo.o:	Nintendo.cpp Nintendo.h Consolas.h
	g++ -c Nintendo.cpp

Consolas.o:	Consolas.cpp Consolas.h
	g++ -c Consolas.cpp

UsuarioAdmin.o:	UsuarioAdmin.cpp UsuarioAdmin.h
	g++ -c UsuarioAdmin.cpp

UsuarioVendedor.o: UsuarioVendedor.cpp UsuarioVendedor.h
	g++ -c UsuarioVendedor.cpp

Juegos.o: Juegos.cpp Juegos.h
	g++ -c Juegos.cpp

clean:
	rm *.o Proyecto
