#ifndef SNAKE_H
#define SNAKE_H

#include <windows.h>

class Snake {
private:
    COORD pos;
    int len;
    int vel;
    char direction;

public:
    Snake(COORD pos, int vel);
};

#endif