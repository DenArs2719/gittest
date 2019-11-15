#include "map.h"
#include "windows.h"
Map::Map(int h, int w)
{
    this->height = h;
    this->width = w;
}

void Map::draw(Player &p,Enemy &e)
{
    system("cls");

    cout<<"Licznik is "<<p.licznik<<endl;

    for(int i=0;i<=height;i++)
    {
        cout<<"*";
    }
    cout<<endl;

    for(int i=0; i<height; i++)
    {
        for(int j=0; j<width; j++)
        {
            if(j==0 || j == width - 1)
            {
                cout<<"*";
            }
            if(i == p.getX() && j == p.getY())
            {
                cout<<"0";
            }
            else if(i == e.getX() && j == e.getY())
            {
                cout<<"F";

            }
            else if(p.getX() == e.getX() && p.getY() == e.getY())
            {
                p.licznik++;
                e.delet();

            }
            else
            {
                bool print = false;
                for(int k = 0;k<p.licznik;k++)
                {
                    if(p.tailX[k] == i && p.tailY[k] == j)
                    {
                        print = true;
                        cout<<"p";
                    }
                }
                if(!print)
                {
                    cout<<" ";
                }

            }


        }
        cout<<endl;
    }


    for(int i=0; i<=height; i++)
    {
        cout<<"*";
    }
}
