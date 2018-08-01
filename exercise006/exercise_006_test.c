#include "exercise_006.h"
#include <assert.h>

static void test_is_positive() 
{
	assert(is_positive(1) && "is_positive");
	assert(is_positive(-1) == false && "is_positive");
	assert(is_positive(0) == false && "is_positive");
}

int main(int argc, char const *argv[])
{
	test_is_positive();
	return 0;
}

