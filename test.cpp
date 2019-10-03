#include "TXLib.h"

//----------------------------------------------------------------------------

void drawMan (int x, int y, int scale, COLORREF color);
void moveMan ();

//----------------------------------------------------------------------------

int main()
{

    txCreateWindow (800, 600);

    drawMan (400, 300, 2, TX_LIGHTCYAN);

    return 0;

}

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
