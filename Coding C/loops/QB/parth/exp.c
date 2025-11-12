#include <stdio.h> 
#include <conio.h> 
#include <graphics.h> 
#include <math.h> 
void translate(int *x, int *y, int tx, int ty) {
    *x += tx; 
    *y += ty; 
} 
void scale(int *x, int *y, float sx, float sy) {
    *x = (int)(*x * sx); 
    *y = (int)(*y * sy); 
} 
void rotate(int *x, int *y, float angle) { 
    float rad = angle * (M_PI / 180.0); // Convert to radians int originalX = *x; 
    int originalY = *y; 
    *x = (int)(originalX * cos(rad) - originalY * sin(rad)); *y = (int)(originalX * sin(rad) + originalY * cos(rad));
} 
void drawShape(int x, int y) { 
    // Example: Drawing a triangle 
    line(x, y, x + 50, y + 100); 
    line(x + 50, y + 100, x - 50, y + 100); line(x - 50, y + 100, x, y); 
} 
int main() { 
    int gm, gd = DETECT; 
    int x = 200, y = 200; // Initial position int tx = 50, ty = 50; // Translation values float sx = 1.5, sy = 1.5; // Scaling factors float angle = 45; // Rotation angle 
    initgraph(&gd, &gm, "c:\\turboc3\\bgi"); 
    // Original shape 
    drawShape(x, y); 
    delay(2000); // Wait for 2 seconds 
    // Translation
    translate(&x, &y, tx, ty); cleardevice(); 
    drawShape(x, y); 
    delay(2000); 
    // Scaling 
    scale(&x, &y, sx, sy); 
    cleardevice(); 
    drawShape(x, y); 
    delay(2000); 
    // Rotation 
    rotate(&x, &y, angle); 
    cleardevice(); 
    drawShape(x, y); 
    delay(2000); 
    getch(); 
    closegraph(); 
return 0; 
}
