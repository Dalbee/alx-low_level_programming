/**
 * flip_bits - a fx. that returns the number of bits you would need to flip
 * to get from one number to another
 * @n: the first number
 * @m: the second number
 *
 * Return: the number of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
    unsigned long int k = n ^ m;
    unsigned int num_of_bits = 0;

    while (k != 0)
    {
        num_of_bits += k & 1;
        k >>= 1;
    }

    return (num_of_bits);
}
