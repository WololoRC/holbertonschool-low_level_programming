/**
 *reverse_array -reverse a array
 *
 *@a: array
 *@n: NUM elements of array
 */
void reverse_array(int *a, int n)
{
	int len, aux;

	len = 0;

	for (len = 0; len < (n / 2); len++)
	{
		aux = a[len];
		a[len] = a[n - len - 1];
		a[n - len - 1] = aux;
	}
}
