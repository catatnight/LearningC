#include <stdio.h>

int main(int argc, char const *argv[])
{
	if (argc == 1)
	{
		printf("You only have one argument. You suck.\n");
	} else if (argc > 1 && argc < 4)
	{
		printf("Here's your arguments:\n");

		for (int i = 0; i < argc; ++i)
		{
			printf("%s ", argv[i]);
		}
		printf("\n");
	} else {
		printf("You have too many arguments. You suck.\n");
	}
	return 0;
}
/*
Extra Credit
1.You were briefly introduced to &&, which does an "and" comparison, so go research online the different "boolean operators".
A: && || !

2.Write a few more test cases for this program to see what you can come up with.

3.Go back to Exercises 10 and 11, and use if-statements to make the loops exit early. You'll need the break statement to do that. Go read about it.

4.Is the first test really saying the right thing? To you the "first argument" isn't the same first argument a user entered. Fix it.
A: if (argc == 2) ; else if (argc > 2 && argc < 5); else;
*/