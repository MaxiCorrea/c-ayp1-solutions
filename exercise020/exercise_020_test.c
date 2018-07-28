#include "exercise_020.h"
#include <assert.h>

static void test_with_the_first_negative() 
{
	assert(calculate(-1, 2, 4) == -8 && "calculate");
}

static void test_with_the_first_positive() 
{
	assert(calculate(1, 2, 4) == 7 && "calculate");
}

int main(int argc, char const *argv[])
{
	test_with_the_first_negative();
	test_with_the_first_positive();
	return 0;
}