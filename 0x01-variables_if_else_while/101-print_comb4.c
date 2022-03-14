#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i = '0';
int j = '1';
int k = '2';
while (i <= '9')
{
while (j <= '9')
{
while (k <= '9')
{
if (j != k)
{
putchar(i);
putchar(j);
putchar(k);
if (i != '7')
{
putchar(',');
putchar(' ');
}
}
k++;
}
j++;
k = j;
}
i++;
j = i;
}
putchar('\n');
return (0);
}
