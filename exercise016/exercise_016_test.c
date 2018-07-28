#include "exercise_016.h"
#include <assert.h>

static void test_calculate_increase_of_10_percent() 
{
	assert(calculate_increase_of_10_percent(100.0f) == 110.0f && "calculate_increase_of_10_percent");
	assert(calculate_increase_of_10_percent(10.0f) == 11.0f && "calculate_increase_of_10_percent");
	assert(calculate_increase_of_10_percent(20.0f) == 22.0f && "calculate_increase_of_10_percent");
}

int main(int argc, char const *argv[])
{
	test_calculate_increase_of_10_percent();
	return 0;
}