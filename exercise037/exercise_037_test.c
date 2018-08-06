#include "exercise_037.h"
#include <assert.h>

static void testing_when_you_enter_all_positives() 
{
	init();
	process_number(1);
	process_number(2);
	process_number(3);
	process_number(4);
	assert(amount_of_negatives() == 0 && "amount_of_negatives");
	assert(amount_of_positives() == 4 && "amount_of_positives");
}

static void testing_when_you_enter_all_negatives() 
{
	init();
	process_number(-1);
	process_number(-2);
	process_number(-3);
	process_number(-4);
	assert(amount_of_negatives() == 4 && "amount_of_negatives");
	assert(amount_of_positives() == 0 && "amount_of_positives");
}


static void testing_when_all_zeros_are_entered() 
{
	init();
	process_number(0);
	process_number(0);
	process_number(0);
	process_number(0);
	assert(amount_of_negatives() == 0 && "amount_of_negatives");
	assert(amount_of_positives() == 0 && "amount_of_positives");
}

int main(int argc, char const *argv[])
{
	testing_when_you_enter_all_positives();
	testing_when_you_enter_all_negatives();
	testing_when_all_zeros_are_entered();
	return 0;
}