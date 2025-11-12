#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main() {
    int x0, y0, x1, y1;
    int gd = DETECT, gm;
    float x, y, p, dx, dy;
    initgraph(&gd, &gm, "c:\\turboc3\\bgi");
    printf("Enter starting co-ordinates:\n-> ");
    scanf("%d%d", &x0, &y0);
    printf("Enter ending co-ordinates:\n-> ");
    scanf("%d%d", &x1, &y1);

    dx = x1 - x0;
    dy = y1 - y0;
    p = 2 * dy - dx;
    x = x0;
    y = y0;
    putpixel(x, y, WHITE);
    while (x < x1) {
	if (p < 0) {
	    p += 2 * dy;
	    x += 1;
	} else {
	    p += 2 * dy - 2 * dx;
	    x += 1;
	    y += 1;
	}
	putpixel(x, y, WHITE);
    }
    getch();
    getch();
    closegraph();
}