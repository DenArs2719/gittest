#ifndef PLAYER_H
#define PLAYER_H


#include <iostream>
#include <string>
#include <conio.h>
using namespace std;

class Player
{
    int positionX;
    int positionY;
    enum  Diriction{STOP = 0,UP,RIGHT,LEFT,DOWN};
    Diriction dir;
    char pres;
    int fruitX;
    int fruitY;

public:
    Player(int x = 0,int y = 0);
    int tailX[100];
    int tailY[100];
    int licznik = 0;
    int getX();
    int getY();
    void logic();
    void input();
    bool gameOver = false;
};
#endif // PLAYER_H
