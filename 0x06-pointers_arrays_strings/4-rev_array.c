#iclude "main.h"
/**
 * reverse_array - reverse array
 * @a: array
 * @n: integer
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i, j;

	for (i = 0; j = (n - 1); i < j; i++; j--)
	{
		j = a[i];
		a[i] = a[n];
		a[n] = j;
	}
}
