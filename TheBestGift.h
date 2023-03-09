#pragma once

#include "PC.h"
#include "PlayStation.h"

class TheBestGift final : public PC, PlayStation
{
public:
	TheBestGift(int pricePC, int pricePS);

	void Show() override;
};

