/**
*get_bit-a function that returns the value of a bit at a given index
*@n: input
*@index: index to search
*Return: a bit value
*/

int get_bit(unsigned long int n, unsigned int index)
{
int bit_value;

/**  63 is the maximum bit position in an unsigned long int **/
if (index > 63)
	return (-1);

bit_value = (n >> index) & 1;

return (bit_value);
}


