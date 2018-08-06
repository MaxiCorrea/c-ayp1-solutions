
#include "exercise_026.h"
#include <stdbool.h>

static int counter;

bool is_even_number(int number) 
{
	return number % 2 == 0;
}

void init() 
{
	counter = 0;
}

void process_number(int number)
{
	counter += (is_even_number(number) ? 1 : 0);
}

int number_of_even_numbers() 
{
	return counter;
}