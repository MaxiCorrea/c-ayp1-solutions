#include "exercise_025.h"
#define STOP 10

static int number;
static int multiplier;

void init_table(int init)
{
	number = init;
	multiplier = 0;
}

int next()
{
	return number * multiplier;
}

bool has_next()
{
	return multiplier++ < STOP;
}