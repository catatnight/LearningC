#include <stdio.h>

/* Warning: This program is wrong on purpose. */

int main()
{
    int age = 10;
    int height;

    printf("I am %d years old.\n");
    printf("I am %d inches tall.\n", height);

    return 0;
}

/*
Extra Credit
1.Fix this program using Valgrind and the compiler as your guide.
2.Read up on Valgrind on the internet.
3.Download other software and build it by hand. Try something you already use but never built for yourself.
4.Look at how the Valgrind source files are laid out in the source directory and read its Makefile. Don't worry, none of that makes sense to me either.
*/