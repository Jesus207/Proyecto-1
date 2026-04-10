#include "Mazo.h"
#include <algorithm>
#include <cstdlib>

void Mazo::crear() {
    cartas.clear();
    for (int i = 1; i <= 100; i++) {
        cartas.push_back(i);
    }
    random_shuffle(cartas.begin(), cartas.end());
}

int Mazo::robar() {
    int c = cartas.back();
    cartas.pop_back();
    return c;
}