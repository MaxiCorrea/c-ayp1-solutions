#include "exercise_010.h"
#include <assert.h>

static void test_without_divisible_by_3() 
{
	assert(check_any_is_divisible_by_3(4,5) == false && "check_any_is_divisible_by_3");
	assert(check_any_is_divisible_by_3(7,2) == false && "check_any_is_divisible_by_3");
}

static void test_with_one_divisible_by_3() 
{
	assert(check_any_is_divisible_by_3(3,2) && "check_any_is_divisible_by_3");
	assert(check_any_is_divisible_by_3(7,12)  && "check_any_is_divisible_by_3");
}

static void test_all_divisible_by_3() 
{
	assert(check_any_is_divisible_by_3(3,6) && "check_any_is_divisible_by_3");
	assert(check_any_is_divisible_by_3(6,9) && "check_any_is_divisible_by_3");
}

int main(int argc, char const *argv[])
{
	test_without_divisible_by_3();
	test_with_one_divisible_by_3();
	test_all_divisible_by_3();
	return 0;
}