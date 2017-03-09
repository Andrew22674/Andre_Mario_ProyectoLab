Proyecto:	main.o Consolas.o Microsoft.o Sony.o Nintendo.o UsuarioAdmin.o UsuarioVendedor.o Juegos.o Venta.o EA.o Bugisoft.o Bandai.o JuegosSony.o JuegosNintendo.o JuegosMicrosoft.o Konami.o Sega.o SquareEnix.o
	g++ main.o Consolas.o Microsoft.o Sony.o Nintendo.o UsuarioAdmin.o UsuarioVendedor.o Juegos.o Venta.o EA.o Bugisoft.o Bandai.o JuegosSony.o JuegosNintendo.o JuegosMicrosoft.o Konami.o Sega.o SquareEnix.o -o Proyecto

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

Bandai.o: Bandai.cpp Bandai.h
	g++ -c Bandai.cpp

Bugisoft.o: Bugisoft.cpp Bugisoft.h
	g++ -c Bugisoft.cpp

EA.o: EA.cpp EA.h
	g++ -c EA.cpp

JuegosMicrosoft.o: JuegosMicrosoft.cpp JuegosMicrosoft.h
	g++ -c JuegosMicrosoft.cpp

JuegosNintendo.o: JuegosNintendo.cpp JuegosNintendo.h
	g++ -c JuegosNintendo.cpp

JuegosSony.o: JuegosSony.cpp JuegosSony.h
	g++ -c JuegosSony.cpp

Konami.o: Konami.cpp Konami.h
	g++ -c Konami.cpp

Sega.o: Sega.cpp Sega.h
	g++ -c Sega.cpp

SquareEnix.o: SquareEnix.cpp SquareEnix.h
	g++ -c SquareEnix.cpp

clean:
	rm *.o Proyecto
