#include "exercise_037.h"
#include <stdbool.h>

static int positives;
static int negatives;

bool isZero(int number)
{
	return number == 0;
}

bool isPositive(int number)
{
	return number > 0;
}

void init()
{
	positives = 0;
	negatives = 0;
}

void process_number(int number)
{

	if (!isZero(number))
	{
		if(isPositive(number)) 
		{
			++positives;
		}
		else 
		{
			++negatives;
		}
	}

}

int amount_of_positives()
{
	return positives;
}

int amount_of_negatives()
{
	return negatives;
}