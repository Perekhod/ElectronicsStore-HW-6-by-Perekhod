#pragma once 

#include "ElectronicsStore.h"

class PlayStation : virtual public ElectronicsStore
{
public:
    PlayStation(int price);
    void Show() override;

protected:
    int _pricePS;
};

class Ñontroller : public PlayStation
{
public:
    Ñontroller (int price, string color);
    void Show() override;

protected:
    string _color;
};

class Discs final : public PlayStation
{
public:
    Discs(int price, string nameGame);
    void Show() override;

private:
    string _nameGame;
};