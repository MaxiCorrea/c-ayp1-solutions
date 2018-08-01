#include "exercise_025.h"
#include <assert.h>

static void test_multiplication_table_of_the_one() 
{
	init_table(1);
	assert(has_next() && "has_next");
	assert(next() == 1 && "next()");
	assert(has_next() && "has_next");
	assert(next() == 2 && "next()");
	assert(has_next() && "has_next");
	assert(next() == 3 && "next()");
	assert(has_next() && "has_next");
	assert(next() == 4 && "next()");
	assert(has_next() && "has_next");
	assert(next() == 5 && "next()");
	assert(has_next() && "has_next");
	assert(next() == 6 && "next()");
	assert(has_next() && "has_next");
	assert(next() == 7 && "next()");
	assert(has_next() && "has_next");
	assert(next() == 8 && "next()");
	assert(has_next() && "has_next");
	assert(next() == 9 && "next()");
	assert(has_next() && "has_next");
	assert(next() == 10 && "next()");	
	assert(has_next() == false && "has_next");
}

static void test_multiplication_table_of_the_three() 
{
	init_table(3);
	assert(has_next() && "has_next");
	assert(next() == 3 && "next()");
	assert(has_next() && "has_next");
	assert(next() == 6 && "next()");
	assert(has_next() && "has_next");
	assert(next() == 9 && "next()");
	assert(has_next() && "has_next");
	assert(next() == 12 && "next()");
	assert(has_next() && "has_next");
	assert(next() == 15 && "next()");
	assert(has_next() && "has_next");
	assert(next() == 18 && "next()");
	assert(has_next() && "has_next");
	assert(next() == 21 && "next()");
	assert(has_next() && "has_next");
	assert(next() == 24 && "next()");
	assert(has_next() && "has_next");
	assert(next() == 27 && "next()");
	assert(has_next() && "has_next");
	assert(next() == 30 && "next()");	
	assert(has_next() == false && "has_next");
}

static void test_multiplication_table_of_the_five() 
{
	init_table(5);
	assert(has_next() && "has_next");
	assert(next() == 5 && "next()");
	assert(has_next() && "has_next");
	assert(next() == 10 && "next()");
	assert(has_next() && "has_next");
	assert(next() == 15 && "next()");
	assert(has_next() && "has_next");
	assert(next() == 20 && "next()");
	assert(has_next() && "has_next");
	assert(next() == 25 && "next()");
	assert(has_next() && "has_next");
	assert(next() == 30 && "next()");
	assert(has_next() && "has_next");
	assert(next() == 35 && "next()");
	assert(has_next() && "has_next");
	assert(next() == 40 && "next()");
	assert(has_next() && "has_next");
	assert(next() == 45 && "next()");
	assert(has_next() && "has_next");
	assert(next() == 50 && "next()");	
	assert(has_next() == false && "has_next");
	
}

int main(int argc, char const *argv[])
{
	test_multiplication_table_of_the_one();
	test_multiplication_table_of_the_three();
	test_multiplication_table_of_the_five();
	return 0;
}