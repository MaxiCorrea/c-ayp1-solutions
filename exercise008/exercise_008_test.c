#include "exercise_008.h"
#include <assert.h>

static void test_with_multiples_of_2() 
{
	assert(is_multiple_of_2(2) && "is_multiple_of_2");
	assert(is_multiple_of_2(4) && "is_multiple_of_2");
	assert(is_multiple_of_2(6) && "is_multiple_of_2");
	assert(is_multiple_of_2(8) && "is_multiple_of_2");	
}

static void test_without_multiples_of_2()
{
	assert(is_multiple_of_2(3) == false && "is_multiple_of_2");
	assert(is_multiple_of_2(5) == false && "is_multiple_of_2");
	assert(is_multiple_of_2(7) == false && "is_multiple_of_2");
	assert(is_multiple_of_2(9) == false && "is_multiple_of_2");	
}

int main(int argc, char const *argv[])
{
	test_with_multiples_of_2();
	test_without_multiples_of_2();
	return 0;
}
