#include "exercise_002.h"
#include <assert.h>
#include <stdbool.h>

static void test_calculate_your_age_within_23_years()
{
	assert(calculate_your_age_within_23_years(1) == 24 && "calculate_your_age_within_23_years()");
	assert(calculate_your_age_within_23_years(20) == 43 && "calculate_your_age_within_23_years()");
	assert(calculate_your_age_within_23_years(30) == 53 && "calculate_your_age_within_23_years()");
	assert(calculate_your_age_within_23_years(5) == 28 && "calculate_your_age_within_23_years()");
}

int main(int argc, char const *argv[])
{
	test_calculate_your_age_within_23_years();
	return 0;
}