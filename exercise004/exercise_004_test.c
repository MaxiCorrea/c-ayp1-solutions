#include "exercise_004.h"
#include <assert.h>
#include <stdbool.h>

static void test_calculate_discount_of_9_percent() 
{
	assert(calculate_discount_of_9_percent(100.0f) == 9.000000f && "calculate_discount_of_9_percent");
	assert(calculate_discount_of_9_percent(90.0f) == 8.100000f  && "calculate_discount_of_9_percent");
	assert(calculate_discount_of_9_percent(15.0f) == 1.350000f  && "calculate_discount_of_9_percent");
}

int main(int argc, char const *argv[])
{
	test_calculate_discount_of_9_percent();
	return 0;
}