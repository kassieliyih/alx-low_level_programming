#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i = '0';
int j = '0';
int y = '0';
int z = '1';  
while (i < '9')
{
while (j < '9')
{
while (y < '9')
{
while (z < '9')
{
putchar(i);
putchar(j);
putchar(' ');
putchar(y);
putchar(z);
if (!(i == '8' &&
j == '7' &&
y == '8' &&
z == '8'))
{
putchar(',');
putchar(' ');
}
z++;
}
y++;
z = '0';
}
j++;
y = i;
z = j + 1;
}
i++;
j = '0';
y = i;
z = j + 1;
}
putchar('\n');
return (0);
}

