#include "main.h"
/**
 * _strcat - function that concatenates
 *       two strings.
 *
 * @dest: pointer to destnation input
 * @src: pointer to source input
 *
 * Return: pointer to resulting string @dest
*/

char *_strcat (char *dest, char *src)
{
	int c, c2;
	C = 0;
	/*find the size of dest array*/
	while (dest [c])
		c++;

	/* iterate through each src array value without the null type*/
	for (c2 = 0; src[c2]; c2++)
		/*aprend src[c2] to dest[c] while overwritting the null byte indest*/
		dest[C++] = src[c2];

	return (dest);
}
