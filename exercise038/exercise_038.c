#include "exercise_038.h"

static int summation;
static int quantity;

void init()
{
	summation = 0;
	quantity = 0;
}

void process_number(int number)
{
	summation += number;
	++quantity;
}

int mean()
{
	return summation / quantity;
}