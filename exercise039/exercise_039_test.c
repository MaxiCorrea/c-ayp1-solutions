#include "exercise_039.h"
#include <assert.h>

static void testing_EN_SUSPENSO_result() 
{
	assert(correct_exam(1.0f) == EN_SUSPENSO && "correct_exam");
	assert(correct_exam(2.0f) == EN_SUSPENSO && "correct_exam");
	assert(correct_exam(3.0f) == EN_SUSPENSO && "correct_exam");
	assert(correct_exam(4.0f) == EN_SUSPENSO && "correct_exam");
}


static void testing_APROBADO_result() 
{
	assert(correct_exam(5.0f) == APROBADO && "correct_exam");
	assert(correct_exam(5.50f) == APROBADO && "correct_exam");
	assert(correct_exam(6.0f) == APROBADO && "correct_exam");
	assert(correct_exam(6.50f) == APROBADO && "correct_exam");
}


static void testing_NOTABLE_result() 
{
	assert(correct_exam(7.0f) == NOTABLE && "correct_exam");
	assert(correct_exam(7.50f) == NOTABLE && "correct_exam");
	assert(correct_exam(8.0f) == NOTABLE && "correct_exam");
	assert(correct_exam(8.50f) == NOTABLE && "correct_exam");
}


static void testing_SOBRESALIENTE_result() 
{
	assert(correct_exam(9.0f) == SOBRESALIENTE && "correct_exam");
	assert(correct_exam(9.50f) == SOBRESALIENTE && "correct_exam");
}


static void testing_MATRICULA_DE_HONOR_result() 
{
	assert(correct_exam(10.0f) == MATRICULA_DE_HONOR && "correct_exam");
}

int main(int argc, char const *argv[])
{
	testing_EN_SUSPENSO_result();
	testing_APROBADO_result();
	testing_NOTABLE_result();
	testing_SOBRESALIENTE_result();
	testing_MATRICULA_DE_HONOR_result();
	return 0;
}
