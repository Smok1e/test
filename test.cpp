#include "TXLib.h"

//----------------------------------------------------------------------------

void drawMan (int x, int y, int sizeX, int sizeY, COLORREF color);
void moveMan ();

//----------------------------------------------------------------------------

int main()
{

    txCreateWindow (800, 600);

    drawMan (400, 300, 400, 400, TX_CYAN);

    return 0;

}

void drawMan (int x, int y, int sizeX, int sizeY, COLORREF color)
{

    txSetColor (color, 3);
    txSetFillColor(TX_BLACK);

    txLine (x, y, sizeX, sizeY);

    txLine (x, y, x + sizeY - y / 2, y + sizeY / 2);
    txLine (x, y, x - sizeY - y / 2, y + sizeY / 2);

    txLine (sizeX, sizeY, sizeX + 30, sizeY + sizeY / 2);
    txLine (sizeX, sizeY, sizeX - 30, sizeY + sizeY / 2);

    txCircle (x, y - 50, 50);


}

//void moveMan (int fromX, int fromY, int toX, int toY, int time)
//{

//    drawMan (fromX, fromY, );

//}


//----------------------------------------------------------------------------
