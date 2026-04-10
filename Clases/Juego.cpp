#include "Juego.h"
#include <iostream>
#include <cctype>

#ifdef _WIN32
#include <conio.h>
#include <windows.h>
#define getch _getch
#else
#include <unistd.h>
#include <termios.h>

// Implementación de getch para Linux
char getch() {
    char buf = 0;
    struct termios old = {0};

    tcgetattr(0, &old);
    old.c_lflag &= ~ICANON;
    old.c_lflag &= ~ECHO;

    tcsetattr(0, TCSANOW, &old);
    read(0, &buf, 1);

    old.c_lflag |= ICANON;
    old.c_lflag |= ECHO;

    tcsetattr(0, TCSADRAIN, &old);

    return buf;
}
#endif

using namespace std;
