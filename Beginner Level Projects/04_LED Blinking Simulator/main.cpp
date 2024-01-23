#include <graphics.h>
#include <dos.h> // For delay function

void drawFilledCircle(int x, int y, int radius, int fillColor) {
    setfillstyle(SOLID_FILL, fillColor);
    setcolor(fillColor);
    circle(x, y, radius);
    floodfill(x, y, fillColor);
}

void blinkLED(int x, int y, int radius, int fillColor, int delayTime, int numBlinks) {
    for (int i = 0; i < numBlinks; ++i) {
        drawFilledCircle(x, y, radius, fillColor);
        delay(delayTime);
        drawFilledCircle(x, y, radius, BLACK); // BLACK for turning off
        delay(delayTime);
    }
}

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, (char*)"");

    while (1) {
        // Blinking red LED
        blinkLED(150, 150, 50, RED, 100, 1);

        // Blinking green LED
        blinkLED(320, 150, 50, GREEN, 100, 1);

        // Blinking blue LED
        blinkLED(490, 150, 50, BLUE, 100, 1);
    }
     getch();
     closegraph();

    return 0;
}

