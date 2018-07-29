#include "exercise_021.h"
#include <assert.h>

static void test_calculate_surface() 
{
	assert(calculate_surface(6.0f , 4.0f) == 12.0f && "calculate_surface");
}

int main(int argc, char const *argv[])
{
	test_calculate_surface();
	return 0;
}