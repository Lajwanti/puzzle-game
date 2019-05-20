#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

int main(void)
{

   int gdriver = DETECT, gmode;

   initgraph(&gdriver, &gmode, "C:\\TURBOC3\BIN");

   setfillstyle(SOLID_FILL,7);
   bar(180,155,220,245);
   setcolor(9);
   circle(200, 200,105);
   setcolor(2);
   circle(200, 200, 80);

   getch();
   closegraph();
   return 0;
}