#pragma once 

#include "ElectronicsStore.h"

class PC : virtual public ElectronicsStore
{
public:
    PC(int price);

    void Show() override;
protected:
    int _pricePC;
};

class KeyBoards final : public PC
{
public:
    KeyBoards(int price, string typeKeyBoard);
    void Show() override;
private:
    string _typeKeyBoard;
};

class Mouse final : public PC
{
public:
    Mouse(int price, string typeMouse);

    void Show() override;
private:
    string _typeMouse;
};