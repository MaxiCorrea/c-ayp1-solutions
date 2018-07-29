#include "exercise_023.h"
#include <assert.h>

static void test_calculate_circumference_length() 
{
	assert(calculate_circumference_length(10.0f) == 31.415926536f && "calculate_circumference_length");
}

static void test_calculate_circle_area() 
{
	assert(calculate_circle_area(8.0f) == 201.06192983f && "calculate_circle_area");
}

int main(int argc, char const *argv[])
{
	test_calculate_circumference_length();
	test_calculate_circle_area();
	return 0;
}