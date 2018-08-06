
#include "exercise_029.h"
#include <assert.h>

static void testing_entry_all_odd_numbers()
{
	init();
	process_number(1);
	process_number(3);
	process_number(5);
	process_number(7);
	assert(number_of_even_numbers() == 0 && "number_of_even_numbers");	
	assert(number_of_odd_numbers() == 4 && "number_of_odd_numbers");	
}

static void testing_entry_all_even_numbers()
{
	init();
	process_number(2);
	process_number(4);
	process_number(6);
	process_number(8);
	assert(number_of_even_numbers() == 4 && "number_of_even_numbers");	
	assert(number_of_odd_numbers() == 0 && "number_of_odd_numbers");
}


static void testing_entry_with_half_even_numbers()
{
	init();
	process_number(2);
	process_number(4);
	process_number(3);
	process_number(1);
	assert(number_of_even_numbers() == 2 && "number_of_even_numbers");	
	assert(number_of_odd_numbers() == 2 && "number_of_odd_numbers");
}

int main(int argc, char const *argv[])
{
	testing_entry_all_even_numbers();
	testing_entry_all_odd_numbers();
	testing_entry_with_half_even_numbers();
	return 0;
}