/**
 * swap_int - swaping numbers
 * @a: first nuumber to swap
 * @b: second number to swap
*/

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
