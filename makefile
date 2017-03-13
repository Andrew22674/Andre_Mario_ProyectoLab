Proyecto:	main.o Consolas.o Microsoft.o Sony.o Nintendo.o UsuarioAdmin.o UsuarioVendedor.o Juegos.o Venta.o ElectronicArts.o Bugisoft.o Bandai.o JuegosSony.o JuegosNintendo.o JuegosMicrosoft.o Konami.o Sega.o SquareEnix.o g_consolas.o g_juegos.o
	g++ main.o Consolas.o Microsoft.o Sony.o Nintendo.o UsuarioAdmin.o UsuarioVendedor.o Juegos.o Venta.o ElectronicArts.o Bugisoft.o Bandai.o JuegosSony.o JuegosNintendo.o JuegosMicrosoft.o Konami.o Sega.o SquareEnix.o g_consolas.o g_juegos.o -lboost_serialization -o Proyecto

main.o:	main.cpp Consolas.h Microsoft.h Sony.h Nintendo.h UsuarioAdmin.h UsuarioVendedor.h Juegos.h Bandai.h Bugisoft.h JuegosMicrosoft.h JuegosNintendo.h JuegosSony.h Konami.h Sega.h SquareEnix.h
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

ElectronicArts.o: ElectronicArts.cpp ElectronicArts.h
	g++ -c ElectronicArts.cpp

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

g_consolas.o: g_consolas.cpp g_consolas.h
	g++ -c g_consolas.cpp

g_juegos.o: g_juegos.cpp g_juegos.h
	g++ -c g_juegos.cpp

clean:
	rm *.o Proyecto
