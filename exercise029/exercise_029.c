#include "exercise_029.h"
#include <stdbool.h>

static int counter_even;
static int counter_odd;

bool is_even_number(int number) 
{
	return number % 2 == 0;
}

void init() 
{
	counter_even = 0;
	counter_odd = 0;
}

void process_number(int number) 
{
	if(is_even_number(number)) 
	{
		++counter_even;
	} 
	else 
	{
		++counter_odd;
	}
}

int number_of_even_numbers()
{
	return counter_even;
}

int number_of_odd_numbers()
{
	return counter_odd;
}

