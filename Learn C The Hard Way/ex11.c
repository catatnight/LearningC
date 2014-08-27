#include <stdio.h>

int main(int argc, char *argv[])
{
	// go through each string in argv

	int i = 0;
	while(i < argc) {
		printf("arg %d: %s\n", i, argv[i]);
		i++;
	}

	// let's make our own array of strings
	char *states[] = {
		"California", "Oregon",
		"Washington", "Texas"
	};

	int num_states = 4;
	i = 0; // watch for this
	while (i < num_states) {
		printf("state %d: %s\n", i, states[i]);
		i++;
	}

	return 0;
}

/*
Extra Credit
1.Make these loops count backward by using i-- to start at argc and count down to 0. You may have to do some math to make the array indexes work right.

2.Use a while loop to copy the values from argv into states.
3.Make this copy loop never fail such that if there's too many argv elements it won't put them all into states.
A: states[5]=*(states + 5) is valid only if the memory is valid.
   states[5]="Boston", but sizeof(states) still is 4*8 = 32; // sizeof(char *)=8

4.Research if you've really copied these strings. The answer may surprise and confuse you though.
*/
