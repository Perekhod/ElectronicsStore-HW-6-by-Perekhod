#include "TheBestGift.h"

TheBestGift::TheBestGift(int pricePC, int pricePS) : PC(pricePC), PlayStation(pricePS)
{
}

void TheBestGift::Show()
{
    cout << "Ћучший подарок ѕк + ѕс стоит: " << _pricePC + _pricePS << " рублей." << endl;
}