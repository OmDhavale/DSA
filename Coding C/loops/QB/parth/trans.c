#include <graphics.h>
#include <stdio.h>
void translatePolygon(int x[], int y[], int n, float tx, float ty) {
    // Draw original polygon
    setcolor(RED);
    for (int i = 0; i < n; i++) {
        line(x[i], y[i], x[(i + 1) % n], y[(i + 1) % n]);
    }
    // Translate the polygon
    for (int i = 0; i < n; i++) {
        x[i] += (int)tx;
        y[i] += (int)ty;
    }
    // Draw translated polygon
    setcolor(YELLOW);
    for (int i = 0; i < n; i++) {
        line(x[i], y[i], x[(i + 1) % n], y[(i + 1) % n]);
    }
}
void rotatePolygon(int x[], int y[], int n, float angle, int cx, int cy) {
    // Convert angle from degrees to radians
    float radians = angle * (M_PI / 180.0);
    // Draw original polygon
    setcolor(RED);
    for (int i = 0; i < n; i++) {
        line(x[i], y[i], x[(i + 1) % n], y[(i + 1) % n]);
    }
    // Rotate the polygon
    for (int i = 0; i < n; i++) {
        int newX = cx + (int)((x[i] - cx) * cos(radians) - (y[i] - cy) * sin(radians));
        int newY = cy + (int)((x[i] - cx) * sin(radians) + (y[i] - cy) * cos(radians));
        x[i] = newX;
        y[i] = newY;
    }
    // Draw rotated polygon
    setcolor(YELLOW);
    for (int i = 0; i < n; i++) {
        line(x[i], y[i], x[(i + 1) % n], y[(i + 1) % n]);
    }
}

int main() {
    int gd = DETECT, gm;
    int n, x[100], y[100], i;
    float sfx, sfy;
    int cx, cy;
    float tx, ty;
    // Initialize graphics mode
    initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");


    // Input number of sides and coordinates of the polygon
    printf("Enter number of sides in polygon: ");
    scanf("%d", &n);
    printf("Enter coordinates x, y for each vertex:\n");
    for (i = 0; i < n; i++) {
        scanf("%d %d", &x[i], &y[i]);
    }
    int ch;
    printf("1.Scaling\n2.Translation\n3.Rotation");
    scanf("%d",&ch);

    switch(ch){
        case 1: // Input scaling factors
            printf("Enter scale factors sfx and sfy: ");
            scanf("%f %f", &sfx, &sfy);
            // Draw original polygon
            setcolor(RED);
            for (i = 0; i < n; i++) {
                line(x[i], y[i], x[(i + 1) % n], y[(i + 1) % n]);
            }
            // Scale the polygon
            for (i = 0; i < n; i++) {
                x[i] = x[0] + (int)((float)(x[i] - x[0]) * sfx);
                y[i] = y[0] + (int)((float)(y[i] - y[0]) * sfy);
            }
            // Draw scaled polygon
            setcolor(YELLOW);
            for (i = 0; i < n; i++) {
                line(x[i], y[i], x[(i + 1) % n], y[(i + 1) % n]);
            }
        case 2:
                printf("Enter translation factors tx and ty: ");
                scanf("%f %f", &tx, &ty);
                translatePolygon(x, y, n, tx, ty);
        case 3: // Center of rotation
                printf("Enter rotation angle (degrees) and center (cx, cy): ");
                scanf("%f %d %d", &angle, &cx, &cy);
                rotatePolygon(x, y, n, angle, cx, cy);
        
        default: printf("Wrong choice !");
    }
    

    getch();
    closegraph();
    return 0;
}
