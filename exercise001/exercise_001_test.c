#include "exercise_001.h"
#include <assert.h>
#include <stdbool.h>

static void test_double_of_a_number()
{

	assert(double_of_a_number(1) == 2 && "test_double_of_a_number()");
	assert(double_of_a_number(2) == 4 && "test_double_of_a_number()");
	assert(double_of_a_number(3) == 6 && "test_double_of_a_number()");
	assert(double_of_a_number(4) == 8 && "test_double_of_a_number()");
	assert(double_of_a_number(5) == 10 && "test_double_of_a_number()");
	assert(double_of_a_number(6) == 12 && "test_double_of_a_number()");
	assert(double_of_a_number(7) == 14 && "test_double_of_a_number()");
	assert(double_of_a_number(8) == 16 && "test_double_of_a_number()");
	assert(double_of_a_number(9) == 18 && "test_double_of_a_number()");
	assert(double_of_a_number(10) == 20 && "test_double_of_a_number()");
}

int main(int argc, char const *argv[])
{
	test_double_of_a_number();
	return 0;
}