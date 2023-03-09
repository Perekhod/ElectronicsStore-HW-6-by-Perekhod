#include "PlayStation.h"

PlayStation::PlayStation(int price) : _pricePS(price)
{
}

void PlayStation::Show() 
{ 
    cout << "Базовая цена на PlayStation: " << _pricePS << " рублей." << endl;
}

Сontroller::Сontroller(int price, string color) : PlayStation(price), _color(color)
{
}

void Сontroller::Show()
{
    cout << _color << " контроллер стоит: " << _pricePS << " рублей." << endl;
}

Discs::Discs(int price, string nameGame) : PlayStation(price), _nameGame(nameGame)
{
}

void Discs::Show()
{
    cout << "Диск с игрой " << _nameGame << " стоит: " << _pricePS << " рублей." << endl;
}