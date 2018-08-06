#include "exercise_030.h"
#include <limits.h>

static int current_position;

static int bigger;
static int position;

void init() 
{
	current_position = 0;
	position = current_position;
	bigger = INT_MIN;
}

void process_number(int number)
{
	++current_position;
	if(bigger < number) 
	{
		bigger = number;
		position = current_position;
	}
}

int the_biggest()
{
	return bigger;
}

int the_position()
{
	return position;
}