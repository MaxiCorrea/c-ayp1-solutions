#include "exercise_019.h"
#include <assert.h>

static void test_disordered_prices() 
{
	assert(ordered_from_lowest_to_highest(10.0f , 9.0f , 4.0f ) == false && "ordered_from_lowest_to_highest");
	assert(ordered_from_lowest_to_highest(4.0f , 10.0f , 9.0f ) == false && "ordered_from_lowest_to_highest");
	assert(ordered_from_lowest_to_highest(10.0f , 4.0f , 9.0f) == false && "ordered_from_lowest_to_highest");
}

static void test_prices_ordered() 
{
	assert(ordered_from_lowest_to_highest(10.0f , 11.0f , 12.0f) && "ordered_from_lowest_to_highest");
	assert(ordered_from_lowest_to_highest(12.0f , 14.0f , 20.0f) && "ordered_from_lowest_to_highest");
	assert(ordered_from_lowest_to_highest(0.0f , 0.2f , 0.4f) && "ordered_from_lowest_to_highest");
}

int main(int argc, char const *argv[])
{
	test_disordered_prices();
	test_prices_ordered();	
	return 0;
}