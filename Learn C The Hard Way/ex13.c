#include <stdio.h>

int main(int argc, char const *argv[])
{
	if (argc != 2)
	{
		printf("ERROR: You need one argument.\n");
		return 1;
	}

	for (int i = 0; argv[1][i] !='\0'; ++i)
	{
		char letter = argv[1][i];

		switch(letter) {
			case 'a':
			case 'A':
				printf("%d: 'A'\n", i);
				break;
			case 'e':
			case 'E':
				printf("%d: 'E'\n", i);
				break;

			case 'i':
			case 'I':
				printf("%d: 'I'\n", i);
				break;

			case 'o':
			case 'O':
				printf("%d: 'O'\n", i);
				break;

			case 'u':
			case 'U':
				printf("%d: 'U'\n", i);
				break;

			case 'y':
			case 'Y':
				if (i >2)
				{
					// it's only sometimes Y
					printf("%d: 'Y'\n", i);
					break;
				}

			default:
				printf("%d: %c is not a vowel\n", i, letter);
		}
	}
	return 0;
}

/*
Extra Credit
1.Write another program that uses math on the letter to convert it to lowercase, and then remove all the extraneous uppercase letters in the switch.
A: if (letter >= 'A' && letter <='Z') { letter +=32; }

2.Use the ',' (comma) to initialize letter in the for-loop.
A: int i;
   char letter;
   for (i = 0; letter = argv[1][i], letter !='\0'; ++i)

3.Make it handle all of the arguments you pass it with yet another for-loop.
A: for (int j = 1; j < argc; ++j) {
      int i;
      char letter;
      for (i = 0; letter = argv[j][i], letter !='\0'; ++i)

4.Convert this switch-statement to an if-statement. Which do you like better?
A: absolutely switch

5.In the case for 'Y' I have the break outside the if-statement. What's the impact of this and what happens if you move it inside the if-statement. Prove to yourself that you're right.
A: If break is placed outside the if-statement, an else-statement is needed.
*/