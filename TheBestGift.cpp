#include "TheBestGift.h"

TheBestGift::TheBestGift(int pricePC, int pricePS) : PC(pricePC), PlayStation(pricePS)
{
}

void TheBestGift::Show()
{
    cout << "������ ������� �� + �� �����: " << _pricePC + _pricePS << " ������." << endl;
}