#include "exercise_038.h"
#include <assert.h>

static void testing_simple_mean() 
{
	init();
	process_number(1);
	process_number(2);
	process_number(3);
	process_number(4);
	process_number(5);
	assert(mean() == 3 && "mean");	
}

int main(int argc, char const *argv[])
{
	testing_simple_mean();
	return 0;
}