#include "PC.h"

PC::PC(int price) : _pricePC(price)
{
}

void PC::Show()
{
    cout << "������� ���� �� ��: " << _pricePC << " ������." << endl;
}

KeyBoards::KeyBoards(int price, string typeKeyBoard) : PC(price), _typeKeyBoard(typeKeyBoard)
{
}

void KeyBoards::Show()
{
    cout << "���� ���������� ���� " << _typeKeyBoard << " : " << _pricePC << " ������." << endl;
}

Mouse::Mouse(int price, string typeMouse) : PC(price), _typeMouse(typeMouse)
{
}

void Mouse::Show()
{
    cout << "���� ����� ���� " << _typeMouse << " : " << _pricePC << " ������." << endl;
}