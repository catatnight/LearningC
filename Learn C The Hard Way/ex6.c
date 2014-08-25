#include <stdio.h>

int main(int argc, char *argv[])
{
	int distance =100;
	float power =2.345f;
	double super_power =56789.4532;
	char initial = 'A';
	char first_name[] = "Zed";
	char last_name[] = "Shaw";

	printf("You are %d miles away.\n", distance);
	printf("You have %f levels of power\n", power);
	printf("You have %f awesome super powers\n", super_power);
	printf("I have an initial %c.\n", initial);
	printf("I have a first name %s\n", first_name);
	printf("I have a last name %s\n", last_name);
	printf("My whole name is %s %c. %s.\n",
			first_name, initial, last_name);

	return 0;
}

/*
Extra Credit
1.Come up with other ways to break this C code by changing the printf, then fix them.

2.Go search for "printf formats" and try using a few of the more exotic ones.
A: http://www.tutorialspoint.com/c_standard_library/c_function_printf.htm

3.Research how many different ways you can write a number. Try octal, hexadecimal, and others you can find.
A: %o  %x,%X

4.Try printing an empty string that's just "".
A: printf(""); //warning: zero-length gnu_printf format string [-Wformat-zero-length]
   puts("");   //new blank line
*/