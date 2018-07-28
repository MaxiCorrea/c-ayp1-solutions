#include "exercise_020.h"

int calculate(int number1, int number2 ,int number3)
{
	int sum = (number1 + number2 + number3);
	int pro = (number1 * number2 * number3);
	return number1 < 0 ? pro : sum;
}