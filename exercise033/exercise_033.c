#include "exercise_033.h"
#include <limits.h>

static int bigger_note;
static char the_sex;

void init()
{
	bigger_note = INT_MIN;
	the_sex = CHAR_MIN;
}

void process_student(int note, char sex)
{
	if(bigger_note < note) 
	{
		bigger_note = note;
		the_sex = sex;
	}
}

int higher_note() 
{
	return bigger_note;
}

bool is_woman()
{
	return the_sex == WOMAN;
}

bool is_man()
{
	return the_sex == MAN;
}