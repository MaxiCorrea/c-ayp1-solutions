#include "exercise_019.h"

bool ordered_from_lowest_to_highest(float price1, float price2, float price3)
{
	return price1 < price2 && price2 < price3 ? true : false;
}