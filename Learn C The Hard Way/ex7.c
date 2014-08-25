#include <stdio.h>

int main(int argc, char *argv[])
{
	int bugs = 100;
	double bug_rate = 1.2;

	printf("You have %d bugs at the imaginary rate of %f.\n",
			bugs, bug_rate);

	long universe_of_defects = 1L * 1024L * 1024L * 1024L;
	printf("The entire universe has %ld bugs.\n",
			universe_of_defects);

	double expected_bugs = bugs * bug_rate;
	printf("You are expected to have %f bugs.\n",
			expected_bugs);

	double part_of_universe = expected_bugs / universe_of_defects;
	printf("That is only a %e portion of the universe.\n",
			part_of_universe);

	// this makes no sense, just a demo of something weird
	char nul_byte = '\0';
	int care_percentage = bugs * nul_byte;
	printf("Which means you should care %d%%.\n",
			care_percentage);

	return 0;
}

/*
Extra Credit
1.Make the number you assign to universe_of_defects various sizes until you get a warning from the compiler.
A: long signed integer's max: 2^31 = 2147483648;

2.What do these really huge numbers actually print out?

3.Change long to unsigned long and try to find the number that makes that one too big.
A: unsigned long's max: 2^32 = 4,294,967,295

4.Go search online to find out what unsigned does.
A: capable of representing only non-negative integers

5.Try to explain to yourself (before I do in the next exercise) why you can multiply a char and an int.
A: \0 represent 0 in char set ISO 8859-1
*/