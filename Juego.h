#ifndef JUEGO_H
#define JUEGO_H

#include "Jugador.h"
#include "Mazo.h"

class Juego {
private:
    Mazo mazo;
    Jugador p1, p2;

    int nivel;
    int vidas;
    int poderes;

public:
    Juego();

    void menu();
    void jugar();
    void reglas();

    void iniciarNivel();
    void tablero(int ultima);
    void animacionInicio();
};

#endif