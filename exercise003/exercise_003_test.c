#include "exercise_003.h"

#include <assert.h>
#include <stdbool.h>

static void test_calculate_iva() 
{
	assert(calculate_iva(100) == 21 && "calculate_iva");
}

int main(int argc, char const *argv[])
{
	test_calculate_iva();
	return 0;
}