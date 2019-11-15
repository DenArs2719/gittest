#ifndef MAP_H
#define MAP_H

#include "player.h"
#include "enemy.h"

class Map
{
    int height;
    int width;


   public:
    Map(int h = 640,int w = 480);
    void draw(Player &p,Enemy &e);
};

#endif // MAP_H

