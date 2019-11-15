#include "player.h"
#include "map.h"
#include "windows.h"
#include "enemy.h"

const int Heigth = 30;
const int Weigth = 30;

int main()
{
    Map mapa(Heigth,Weigth);
    Player player(10,6);
    Enemy e;
  while(!player.gameOver)
  {
      mapa.draw(player,e);
      player.input();
      player.logic();
      Sleep(300);
  }


    return 0;
}
