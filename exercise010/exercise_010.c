#include "exercise_010.h"

bool is_divisible_by_3( int number) {
	return number % 3 == 0 ; 
}

bool check_any_is_divisible_by_3(int number1 , int number2)
{
	return is_divisible_by_3(number1) || 
	       is_divisible_by_3(number2);
}