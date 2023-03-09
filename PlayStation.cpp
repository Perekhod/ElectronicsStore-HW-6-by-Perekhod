#include "PlayStation.h"

PlayStation::PlayStation(int price) : _pricePS(price)
{
}

void PlayStation::Show() 
{ 
    cout << "������� ���� �� PlayStation: " << _pricePS << " ������." << endl;
}

�ontroller::�ontroller(int price, string color) : PlayStation(price), _color(color)
{
}

void �ontroller::Show()
{
    cout << _color << " ���������� �����: " << _pricePS << " ������." << endl;
}

Discs::Discs(int price, string nameGame) : PlayStation(price), _nameGame(nameGame)
{
}

void Discs::Show()
{
    cout << "���� � ����� " << _nameGame << " �����: " << _pricePS << " ������." << endl;
}