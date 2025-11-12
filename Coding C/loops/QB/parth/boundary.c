#include<stdio.h> 
#include<conio.h> 
#include<graphics.h> 
#include<math.h> 
void floodfill(int x, int y, int o_color,int n_color){ 
    if(getpixel(x,y)==o_color){ 
        putpixel(x,y,n_color); 
        floodfill(x+1,y,o_color,n_color); 
        floodfill(x,y+1,o_color,n_color); 
        floodfill(x-1,y,o_color,n_color); 
        floodfill(x,y-1,o_color,n_color); 
    } 
} 
int main(){ 
int gm,gd=DETECT; 
int x,y; 
initgraph(&gd,&gm, "c:\\turboc3\\bgi"); 
rectangle(100,100,50,50); 
floodfill(55,55,10,15); 
getch(); 
closegraph(); 
getch();
getch();
getch();
return 0; 
}
