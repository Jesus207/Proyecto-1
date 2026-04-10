#ifndef MAZO_H
#define MAZO_H

#include <vector>
using namespace std;

class Mazo {
private:
    vector<int> cartas;

public:
    void crear();
    int robar();
};

#endif