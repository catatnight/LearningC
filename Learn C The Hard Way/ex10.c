#include <stdio.h>

int main(int argc, char const *argv[])
{
	int i = 0;

	// go through each string in argv
	// why am I skipping arg[0]:
	// 	argv[0] is the name by which the program was called
	// argc stands for "argument count"

	for (i = 1; i < argc; ++i)
	{
		printf("arg %d: %s\n", i, argv[i]);
	}

	// let's make our own array of strings
	char *states[] = {
		"California", "Oregon",
		"Washington", "Texas"
	};
	int num_states = 4;

	for (i = 0; i < num_states; ++i)
	{
		printf("state %d: %s\n", i, states[i]);
	}

	return 0;
}

/*
Extra Credit
1.Figure out what kind of code you can put into the parts of a for-loop.

2.Look up how to use the ',' (comma) character to separate multiple statements in the parts of the for-loop, but between the ';' (semicolon) characters.
A: for (i = 1; i < argc; printf("arg %d: %s\n", i, argv[i]),i++)
   {
   }

3.Read what a NULL is and try to use it in one of the elements of the states array to see what it'll print.
A: An integer constant expression with the value 0, or such an expression cast to type  void *, is called a null pointer constant.
   55) If a null pointer constant is converted to a pointer type, the resulting pointer, called a null pointer, is guaranteed to compare unequal to a pointer to any object or function.

4.See if you can assign an element from the states array to the argv array before printing both. Try the inverse.
*/