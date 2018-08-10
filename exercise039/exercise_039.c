#include "exercise_039.h"

int correct_exam(float note)
{
	int result;

	if(note < 5.0f) 
	{
		result = EN_SUSPENSO;
	}
	else if(note < 7.0f) 
	{
		result = APROBADO;
	}
	else if(note < 9.0f)
	{
		result = NOTABLE;
	}
	else if(note < 10.0f) 
	{
		result = SOBRESALIENTE;
	} 
	else 
	{
		result = MATRICULA_DE_HONOR;
	}

	return result;
}