#include "TXLib.h"

//----------------------------------------------------------------------------

void drawMan (int x, int y, int scale, COLORREF color);
void moveMan (int fromX, int fromY, int toX, int toY, int scale, COLORREF color, COLORREF bkColor, int steps, int time);

//----------------------------------------------------------------------------

int main()
{

    txCreateWindow (800, 600);

    drawMan (100, 300, 2, TX_LIGHTCYAN);
    moveMan (100, 300, 500, 300, 2, TX_LIGHTCYAN, TX_BLACK, 400, 1000);

    return 0;

}

//----------------------------------------------------------------------------

void drawMan (int x, int y, int scale, COLORREF color)
{

    txSetColor (color, scale);
    txSetFillColor(TX_BLACK);

    txLine (x, y, x, y + scale * 40);

    txLine (x, y + scale * 5, x + scale * 7, y + scale * 25);
    txLine (x, y + scale * 5, x - scale * 7, y + scale * 25);

    txLine (x, y + scale * 40, x + scale * 10, y + scale * 40 + scale * 20);
    txLine (x, y + scale * 40, x - scale * 10, y + scale * 40 + scale * 20);

    txCircle (x, y - scale * 5, scale * 10);


}

//----------------------------------------------------------------------------

void moveMan (int fromX, int fromY, int toX, int toY, int scale, COLORREF color, COLORREF bkcolor, int steps, int time)
{

    int x = fromX;
    int y = fromY;

    for (int i = 0; i <= steps; i++)
    {

        txSleep (time / steps);

        drawMan(x, y, scale, bkcolor);

        x = fromX + (toX - fromX) * i / steps;
        y = fromY + (toY - fromY) * i / steps;

        drawMan (x, y, scale, color);


    }

}


//----------------------------------------------------------------------------
