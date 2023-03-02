#include "main.h"

/**
 * reverse_array - reverse array of integers
 * @a: array
 * @n: number of elements of array
 * Return: void
 */
void reverse_array(int *a, int n)
{
        int i = 0, half;

        for (half = n / 2; half > 0; half--, i++)
        {
                a[n - i - 1] += a[i];
                a[i] = a[in - i - 1] - a[i];
                a[n - i - 1] = a[n - i - 1] - a[n];
        }
}
