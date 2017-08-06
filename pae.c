#include<graphics.h>
#include<conio.h>

int main() {
   int gd = DETECT, gm, x, y;
   initgraph(&gd, &gm, "C:\\TC\\BGI");

   settextstyle(BOLD_FONT,HORIZ_DIR,6);
   outtextxy(100,10,"PIE CHART OF LNM");
   /* Setting cordinate of center of circle */
   x = getmaxx()/2;
   y = getmaxy()/2;

   settextstyle(SANS_SERIF_FONT,HORIZ_DIR,3);
   setfillstyle(SOLID_FILL, RED);
   pieslice(x, y, 0, 154, 120);
   outtextxy(x + 140, y - 100, "cse");

   setfillstyle(SOLID_FILL, YELLOW);
   pieslice(x, y, 154,276, 120);
   outtextxy(x - 200, y , "ece");

   setfillstyle(SOLID_FILL, GREEN);
   pieslice(x, y, 276,345, 120);
   outtextxy(x+50 , y +130, "cce");

   setfillstyle(SOLID_FILL, BROWN);
   pieslice(x, y,345, 360, 120);
   outtextxy(x+140, y  , "other");

   getch();
   closegraph();
   return 0;
}
