#include <stdio.h>

int main(int argc, char *argv[])
{
    puts("Hello world.");

    return 0;
}

/*
Extra Credit
1.Open the ex1 file in your text editor and change or delete random parts. Try running it and see what happens.

2.Print out 5 more lines of text or something more complex than hello world.

3.Run man 3 puts and read about this function and many others.
A: int puts(const char *str)
   char *strcpy(char *dest, const char *src) // 不产生字符串，仅复制，因此未必要free memory，依*dest的定义而定
*/