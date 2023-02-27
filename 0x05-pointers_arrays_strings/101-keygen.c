#include <stdlib.h>
#include "main.h"
#include <time.h>
#include <math.h>

/**
 * keygen - generate password
 * @N: length of password
 * Return: return value
 */
void keygen(int N)
{
	int i = 0;
	int randomizer = 0;

	srand((unsigned int)(time(NULL)));
	char num[] = "0123456789";
	char letter[] = "abcdefghijklmnoqprstuvwyzx";
	char LETTER[] = "ABCDEFGHIJKLMNOQPRSTUYWVZX";
	char symbols[] = "!@#$^&*?";
	char passwd[N];

	randomizer = rand() % 4;
	for (i = 0; i < N; i++)
	{
		if (randomizer == 1)
		{
			passwd[i] = num[rand() % 10];
			randomizer = rand() % 4;
			printf("%c", passwd[i]);
		}
		else if (randomizer == 2)
		{
			passwd[i] = symbols[rand() % 8];
			randomizer = rand() % 4;
			printf("%c", passwd[i]);
		}
		else if (randomizer == 3)
		{
			passwd[i] = LETTER[rand() % 26];
			randomizer = rand() % 4;
			printf("%c", passwd[i]);
		}
		else
		{
			passwd[i] = letter[rand() % 26];
			randomizer = rand() % 4;
			printf("%c", passwd[i]);
		}
	}
}

int main(void)
{
	int N = 10;

	keygen(N);
	return (0);
}

