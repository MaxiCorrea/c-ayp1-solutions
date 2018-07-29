#include "exercise_022.h"
#include <assert.h>

static void test_min() 
{
	assert(min(3,4) == 3 && "min");
	assert(min(4,3) == 3 && "min");
}

int main(int argc, char const *argv[])
{
	test_min();
	return 0;
}