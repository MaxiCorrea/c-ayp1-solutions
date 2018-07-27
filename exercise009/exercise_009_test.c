#include "exercise_009.h"
#include <assert.h>

static void test_with_multiples_of_5() 
{
	assert(is_multiple_of_5(5) == true && "is_multiple_of_5");
	assert(is_multiple_of_5(10) == true && "is_multiple_of_5");
	assert(is_multiple_of_5(15) == true && "is_multiple_of_5");
	assert(is_multiple_of_5(20) == true && "is_multiple_of_5");	
}

static void test_without_multiples_of_5()
{
	assert(is_multiple_of_5(6) == false && "is_multiple_of_5");
	assert(is_multiple_of_5(11) == false && "is_multiple_of_5");
	assert(is_multiple_of_5(16) == false && "is_multiple_of_5");
	assert(is_multiple_of_5(21) == false && "is_multiple_of_5");	
}

int main(int argc, char const *argv[])
{
	test_with_multiples_of_5();
	test_without_multiples_of_5();
	return 0;
}
