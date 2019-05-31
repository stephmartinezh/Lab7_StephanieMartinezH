Main: Main.o Persona.o Air.o Fire.o Water.o Earth.o Non.o Poder.o Ofensivo.o Defensa.o Curativo.o Invocacion.o
	g++ Main.o Persona.o Air.o Fire.o Water.o Earth.o Non.o Poder.o Ofensivo.o Defensa.o Curativo.o Invocacion.o -o Main

Main.o: Main.cpp Persona.h Air.h Fire.h Water.h Earth.h Non.h Poder.h Ofensivo.h Defensa.h Curativo.h Invocacion.h
	g++ -c Main.cpp

Persona.o: Persona.cpp Persona.h Poder.h
	g++ -c Persona.cpp

Air.o: Air.cpp Air.h Persona.h
	g++ -c Air.cpp

Fire.o: Fire.cpp Fire.h Persona.h
	g++ -c Fire.cpp
	
Water.o: Water.cpp Water.h Persona.h
	g++ -c Water.cpp

Earth.o: Earth.cpp Earth.h Persona.h
	g++ -c Earth.cpp

Non.o: Non.cpp Non.h Persona.h
	g++ -c Non.cpp

Poder.o: Poder.cpp Poder.h 
	g++ -c Poder.cpp

Ofensivo.o: Ofensivo.cpp Ofensivo.h Poder.h
	g++ -c Ofensivo.cpp

Defensa.o: Defensa.cpp Defensa.h Poder.h
	g++ -c Defensa.cpp

Curativo.o: Curativo.cpp Curativo.h Poder.h
	g++ -c Curativo.cpp

Invocacion.o: Invocacion.cpp Invocacion.h Poder.h
	g++ -c Invocacion.cpp
