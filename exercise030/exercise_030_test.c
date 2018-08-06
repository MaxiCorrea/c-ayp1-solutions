#include "exercise_030.h"
#include <assert.h>

static void testing_the_largest_one_is_entered_first() 
{
	init();
	process_number(100);
	process_number(1);
	process_number(30);
	process_number(-100);
	process_number(10);	
	assert(the_biggest() == 100 && "the_biggest");
	assert(the_position() == 1 && "the_position");
}

static void testing_the_largest_is_entered_last() 
{
	init();
	process_number(1);
	process_number(30);
	process_number(-100);
	process_number(10);	
	process_number(100);
	assert(the_biggest() == 100 && "the_biggest");
	assert(the_position() == 5 && "the_position");
}

static void testing_the_largest_is_entered_in_the_middle()
{
	init();
	process_number(1);
	process_number(30);
	process_number(100);
	process_number(-100);
	process_number(10);	
	assert(the_biggest() == 100 && "the_biggest");
	assert(the_position() == 3 && "the_position");
}

int main(int argc, char const *argv[])
{
	testing_the_largest_one_is_entered_first();
	testing_the_largest_is_entered_last();
	testing_the_largest_is_entered_in_the_middle();
	return 0;
}