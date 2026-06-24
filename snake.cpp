#include<bits/stdc++.h>
#include<conio.h>
#include<windows.h>
using namespace std;
#define MAX_LENGTH 1000

//direction
const char up_dir='w';
const char down_dir='S';
const char right_dir='D';
const char left_dir='A';
 
int consolewidth,consoleheight;

void initscreen(){
    HANDLE hConsole=GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_SCREEN_BUFFER_INFO csbi;
    GetConsoleScreenBufferInfo(hConsole,&csbi);
    consoleheight=csbi.srWindow.Bottom-csbi.srWindow.Top+1;
    consolewidth=csbi.srWindow.Right-csbi.srWindow.Left+1;


}
struct point{
    int xcoord;
    int ycoord;
    point(int xcoord,int ycoord){
        this->xcoord=xcoord;
        this->ycoord=ycoord;
    
    }

};
class snake{
    int length;
    char direction;
    public:
    point body[MAX_LENGTH];
    snake(int x,int y){
     length=1;
     body[0]=point(x,y);
     direction=right_dir;
    }
    ~snake(){
        delete[] body;
    }
};
