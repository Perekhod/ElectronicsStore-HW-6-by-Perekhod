#pragma once
#include <iostream>
using namespace std;

class ElectronicsStore
{
public:
	virtual void Show() = 0;
	virtual ~ElectronicsStore() = default;
};

