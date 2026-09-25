#include <iostream>
#include "item.h"

int TotalWeight(int itemCount);

int SlotsUsed(int items);

int main()
{
	item sword;
	sword.weight = 5;
	std::cout << sword.weight << "\n";
	return 0;
}

