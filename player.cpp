#include "player.h"
Player::Player(int x, int y)
{
   this->positionX = x;
   this->positionY = y;
}

int Player::getX()
{
    return this->positionX;
}

int Player::getY()
{
    return this->positionY;
}
void Player::input()
{
    switch(pres=getch())
    {
     case 'w':
         dir = UP;
         break;
     case 'd':
        dir = RIGHT;
        break;
     case 's':
        dir = DOWN;
        break;
     case 'a':
        dir = LEFT;
        break;
     case 'x':
        gameOver = true;
        break;
    }

}

void Player::logic()
{
    int prevX = tailX[0];
    int prevY = tailY[0];
    tailX[0] = getX();
    tailY[0] = getY();
    int prev2X,prev2Y;
    for(int t=1;t<licznik;t++)
    {
        swap(prevX,tailX[t]);
        swap(prevY,tailY[t]);

        /*prev2X = tailX[t];
        prev2Y = tailY[t];
        tailX[t] = prevX;
        tailY[t] = prevY;
        prevX = prev2X;
        prevY = prev2Y;*/
    }
   switch(dir)
   {
    case RIGHT:
        this->positionY++;
        break;
    case UP:
        this->positionX--;
        break;
    case LEFT:
        this->positionY--;
        break;
    case DOWN:
        this->positionX++;
        break;
   }



}




