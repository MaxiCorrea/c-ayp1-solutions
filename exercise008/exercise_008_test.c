#include "exercise_008.h"
#include <assert.h>

static void test_is_multiple_of_2() 
{
	assert(is_multiple_of_2(2) == true && "is_multiple_of_5");
	assert(is_multiple_of_2(4) == true && "is_multiple_of_5");
	assert(is_multiple_of_2(6) == true && "is_multiple_of_5");
    assert(is_multiple_of_2(8) == true && "is_multiple_of_5");
	assert(is_multiple_of_2(3) == false && "is_multiple_of_5");
	assert(is_multiple_of_2(5) == false && "is_multiple_of_5");
	assert(is_multiple_of_2(7) == false && "is_multiple_of_5");
    assert(is_multiple_of_2(9) == false && "is_multiple_of_5");		
}

int main(int argc, char const *argv[])
{
	test_is_multiple_of_2();
	return 0;
}
