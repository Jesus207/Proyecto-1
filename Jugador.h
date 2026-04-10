#ifndef JUGADOR_H
#define JUGADOR_H

#include <vector>
#include "Mazo.h"
using namespace std;

class Jugador {
public:
    vector<int> mano;

    void repartir(Mazo &mazo, int n);
    void verCartasPrivado(char tecla, int num);
    bool vacio();
    int jugar(int index);
    void eliminarMenor();
};

#endif