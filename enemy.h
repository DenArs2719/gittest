#ifndef ENEMY_H
#define ENEMY_H
#include <cmath>
#include <ctime>
class Enemy
{
    int x;
    int y;

public:

    Enemy(int x = 0,int y = 0)
    {
        srand(time(NULL));
        this->x = rand() % 30;
        this->y = rand() % 30;
    }

    int getX()
    {
        return this->x;
    }

    int getY()
    {
        return this->y;
    }

    void delet()
    {
        srand(time(NULL));

        this->x = rand() % 30;
        this->y = rand() % 30;
    }
};

#endif // ENEMY_H
