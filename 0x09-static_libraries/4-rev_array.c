/**
 * reverse_array - fufnction to reverse an array of integers
 * @a: the array
 * @n: the size of the array
*/
void reverse_array(int *a, int n)
{
	int i;
	int j = 0;
	int temp[1000];

	for (i = (n - 1); i >= 0; i--)
	{
		temp[j] = *(a + i);
		j++;
	}

	for (i = 0; i < n; i++)
	{
		*(a + i) = temp[i];
	}
}
