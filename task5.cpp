#include<iostream>
#include<windows.h>
using namespace std;
void maze();
void pacman(int x,int y);
void gotoxy(int x,int y);
void erase(int x,int y);
char getCharAtxy(short int , short int );
main()
{
  int pacmanx=4;
  int pacmany=4;
  bool gamerunning=true;

  system("cls");
  maze();
  pacman(pacmanx,pacmany);
  while(gamerunning)
  {
    if(GetAsyncKeyState(VK_LEFT))
    {
      char next_location=getCharAtxy(pacmanx-1,pacmany);
      if(next_location==' ')
      {
        erase(pacmanx,pacmany);
        pacmanx=pacmanx-1;
        pacman(pacmanx,pacmany);
      }
    }
         if(GetAsyncKeyState(VK_RIGHT))
    {
      char next_location=getCharAtxy(pacmanx+1,pacmany);
      if(next_location==' ')
      {
        erase(pacmanx,pacmany);
        pacmanx=pacmanx+1;
        pacman(pacmanx,pacmany);
      }
    }
       if(GetAsyncKeyState(VK_UP))
    {
      char next_location=getCharAtxy(pacmanx,pacmany-1);
      if(next_location==' ')
      {
        erase(pacmanx,pacmany);
        pacmany=pacmany-1;
        pacman(pacmanx,pacmany);
      }
    }
       if(GetAsyncKeyState(VK_DOWN))
    {
      char next_location=getCharAtxy(pacmanx,pacmany+1);
      if(next_location==' ')
      {
        erase(pacmanx,pacmany);
        pacmany=pacmany+1;
        pacman(pacmanx,pacmany);
      }
    }
        if(GetAsyncKeyState(VK_ESCAPE))
        {
         gamerunning=false;
        }
        Sleep(200);


  }
}














void maze()
{
cout<<"######################################"<<endl;
cout<<"#                                    #"<<endl;
cout<<"#                                    #"<<endl;
cout<<"#                                    #"<<endl;
cout<<"#                                    #"<<endl;
cout<<"#                                    #"<<endl;
cout<<"#                                    #"<<endl;
cout<<"#                                    #"<<endl; 
cout<<"#                                    #"<<endl;
cout<<"#                                    #"<<endl;
cout<<"#                                    #"<<endl;
cout<<"#                                    #"<<endl;
cout<<"#                                    #"<<endl;
cout<<"######################################"<<endl;
}
void gotoxy(int x,int y)
{
 COORD coordinates;
 coordinates.X=x;
 coordinates.Y=y;
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}
void pacman(int x,int y)
{
  gotoxy(x,y);
  cout<<"p";   
}
void erase(int x,int y)
{
 gotoxy(x,y);
 cout<<" ";
}



char getCharAtxy(short int x, short int y)
{
 CHAR_INFO ci;
 COORD xy = {0,0};
 SMALL_RECT rect = {x,y,x,y};
 COORD coordBufSize;
 coordBufSize.X = 1;
 coordBufSize.Y = 1;
 return ReadConsoleOutput(GetStdHandle(STD_OUTPUT_HANDLE),&ci,coordBufSize,xy,&rect) ? ci.Char.AsciiChar: ' ';
}



  
