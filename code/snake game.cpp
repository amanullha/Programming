#include <stdio.h>
#include<iostream>
#include<cstdlib>
#include <stdlib.h>
#include<ctime>
#include<conio.h>
#include <bits/stdc++.h>
using namespace std;
int width=20,height=20;
int x,y,fruitX,fruitY,score,gameover;
void Initial_setup()
{
    gameover=0;
    x=width/2;
    y=height/2;
    srand(time(0));
level1:
    fruitX=rand()%width;
    if(!fruitX)goto level1;

level2:
    fruitY=rand()%height;
    if(!fruitY)goto level2;

    score=0;
}

void draw()
{
    int i,j;
    for(i=0; i<height; i++)
    {
        for(j=0; j<width; j++)
        {
            if(i==0 || i==height-1 || j==0 || j==width-1)
                cout<<"*";
            else
            {

                if(i==x && j==y)
                    cout<<"@";
                else if(i==fruitX && j==fruitY)
                    cout<<"F";


                else

                    cout<<" ";

            }
        }
        cout<<endl;
    }
}

void input()
{
    if(kbhit())
    {
    }

}
int main()
{
    Initial_setup();
    draw();
    return 0;
}

