#include <stdio.h>

/**
 *main - a function printing the alphabet
 *return: a 0
 */

int main(void)
{
char letter;

for (letter = 'a'; letter <= 'z'; letter++);
{
if (letter != 'e' && letter != 'q')
putchar(letter);
}
putchar("\n");
return (0);

}
