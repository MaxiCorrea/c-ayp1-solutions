#include "exercise_007.h"
#include <assert.h>

static void test_is_even() 
{
	assert(is_even(1) == false && "is_even");
	assert(is_even(2) && "is_even");
	assert(is_even(3) == false && "is_even");
	assert(is_even(4) && "is_even");
	assert(is_even(5) == false && "is_even");
}

int main(int argc, char const *argv[])
{
	test_is_even();
	return 0;
}