#include <stdio.h>

int main()
{
	int age = 10;
	int height = 72;

	printf("I am %d years old.\n", age);
	printf("I am %d inches tall.\n", height);

	return 0;
}

/*
Extra Credit
1.Find as many other ways to break ex3.c as you can.
2.Run man 3 printf and read about the other '%' format characters you can use. These should look familiar if you used them in other languages (printf is where they come from).
3.Add ex3 to your Makefile's all list. Use this to make clean all and build all your exercises so far.
4.Add ex3 to your Makefile's clean list as well. Now use make clean will remove it when you need to.
*/
