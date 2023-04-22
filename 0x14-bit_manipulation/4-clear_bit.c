/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: integer to edit the bit value
 * @index: position to set 1
 * Return: returns 1 on success, -1 error
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int inter;

	if (index >= (sizeof(*n) * 8))
		return (-1);
	inter = 1;
	inter = inter << index;
	inter = ~inter;
	*n = *n & inter;

	return (1);
}

