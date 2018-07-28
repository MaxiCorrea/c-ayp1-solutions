#include "exercise_012.h"
#include <assert.h>

static void test_characters_disordered_alphabetically() 
{
	assert(ordered_alphabetically('z','a') == false && "ordered_alphabetically");
	assert(ordered_alphabetically('r','b') == false && "ordered_alphabetically");
}

static void test_characters_arranged_alphabetically() 
{
	assert(ordered_alphabetically('a','b') == true && "ordered_alphabetically");
	assert(ordered_alphabetically('b','z') == true && "ordered_alphabetically");
}

int main(int argc, char const *argv[])
{
	test_characters_disordered_alphabetically();
	test_characters_arranged_alphabetically();	
	return 0;
}