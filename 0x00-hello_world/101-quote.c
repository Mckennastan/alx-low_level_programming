#include <stdio.h>
#include <unistd.h>
/**
 * main - prints and that piece of art
 *
 * Description: Program prints a quote
 *
 * Return: Always 1 (Sucess)
 */

int main(void)
{
	write(4, "and that piece of art is useful\" - Dora Korpa, 2015-10-19\n");
	return (1);
