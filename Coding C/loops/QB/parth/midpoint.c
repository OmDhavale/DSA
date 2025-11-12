#include <graphics.h>  
#include <stdlib.h>  
#include <stdio.h>  
#include <conio.h>  
#include <math.h>  
  
    void    EightWaySymmetricPlot(int xc,int yc,int x,int y)  
   {
    putpixel(x+xc,y+yc,WHITE);
    putpixel(x+xc,-y+yc,WHITE);
    putpixel(-x+xc,-y+yc,WHITE);
    putpixel(-x+xc,y+yc,WHITE);
    putpixel(y+xc,x+yc,WHITE);
    putpixel(y+xc,-x+yc,WHITE);
    putpixel(-y+xc,-x+yc,WHITE);
    putpixel(-y+xc,x+yc,WHITE);
   }

    void BresenhamCircle(int xc,int yc,int r)
   {
    int x=0,y=r,Pk=1-r;
    EightWaySymmetricPlot(xc,yc,x,y);

    while(x<=y)
     {
      if(Pk<0){
        x = x + 1;
        Pk = Pk + 2*x + 1;
      }
     else
      {
        x = x + 1;
        y = y - 1;
        Pk = Pk + 2*x + 1 - 2*y;
      }
       x=x+1;
       EightWaySymmetricPlot(xc,yc,x,y);
      }
    }

   


 int  main(void)
   {
   
    int xc,yc,r,gdriver = DETECT, gmode, errorcode;
   
     initgraph(&gdriver, &gmode, "C:\\TURBOC3\\BGI");
       printf("Enter the values of xc and yc :");
       scanf("%d %d",&xc,&yc);
       printf("Enter the value of radius  :");
       scanf("%d",&r);
       BresenhamCircle(xc,yc,r);

     getch();
     getch();
     closegraph();
     
    }
