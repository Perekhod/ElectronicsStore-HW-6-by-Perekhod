#include "PC.h"

PC::PC(int price) : _pricePC(price)
{
}

void PC::Show()
{
    cout << "Базовая цена на ПК: " << _pricePC << " рублей." << endl;
}

KeyBoards::KeyBoards(int price, string typeKeyBoard) : PC(price), _typeKeyBoard(typeKeyBoard)
{
}

void KeyBoards::Show()
{
    cout << "Цена клавиатуры типа " << _typeKeyBoard << " : " << _pricePC << " рублей." << endl;
}

Mouse::Mouse(int price, string typeMouse) : PC(price), _typeMouse(typeMouse)
{
}

void Mouse::Show()
{
    cout << "Цена мышки типа " << _typeMouse << " : " << _pricePC << " рублей." << endl;
}