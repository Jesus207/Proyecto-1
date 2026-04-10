#include "Juego.h"
#include <ctime>
#include <cstdlib>

int main() {
    srand(time(0));

    Juego j;
    j.menu();

    return 0;
}