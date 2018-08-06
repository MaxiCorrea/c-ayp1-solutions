#include "exercise_033.h"
#include <assert.h>

static void testing_when_the_highest_grade_is_from_a_woman()
{
	init();
	process_student(10 , WOMAN);
	process_student(9 , MAN);
	process_student(7 , WOMAN);
	assert(higher_note() == 10 && "higher_note");
	assert(is_man() == false && "is_man");
	assert(is_woman() && "is_woman");
}

static void testing_when_the_highest_grade_is_from_a_man()
{
	init();
	process_student(9 , MAN);
	process_student(7 , WOMAN);
	process_student(10 , MAN);
	assert(higher_note() == 10 && "higher_note");
	assert(is_woman() == false && "is_woman");
	assert(is_man() && "is_man");
}

int main(int argc, char const *argv[])
{
	testing_when_the_highest_grade_is_from_a_woman();
	testing_when_the_highest_grade_is_from_a_man();
	return 0;
}