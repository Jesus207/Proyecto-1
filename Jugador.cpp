#ifndef CLASJUGADOR_H
#define CLASJUGADOR_H

#include <vector>
#include <algorithm>
#include <random>   
using namespace std;

class Mazo {
public:
    vector<int> cartas;

    void crear() {
        cartas.clear();
        for (int i = 1; i <= 100; i++) {
            cartas.push_back(i);
        }
        
        random_device rd;
        mt19937 g(rd());

        shuffle(cartas.begin(), cartas.end(), g);
    }

    int robar() {
        int c = cartas.back();
        cartas.pop_back();
        return c;
    }
};

#endif
