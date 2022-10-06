/**
 *swap_int -swap numbers
 *
 *@a: pointer
 *@b: pointer
 */
void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}
