#include <unistd.h>

void    my_putchar(char c)
{
	write(1, &c, 1);
}

int     my_put_nbr(int nbr)
{
    if (nbr < 0)
    {
        nbr *= -1;
        my_putchar('-');
    }
    if (nbr >= 10)
    {
        my_put_nbr(nbr / 10);
        my_putchar(nbr % 10 + 48);
    }
    else
        my_putchar(nbr + 48);

    return 0;
}

int     main()
{
    my_put_nbr(-2147483647);
    my_putchar('\n');
    my_put_nbr(-42);
    my_putchar('\n');
    my_put_nbr(0);
    my_putchar('\n');
    my_put_nbr(42);
    my_putchar('\n');
    my_put_nbr(2147483647);
    my_putchar('\n');

    return 0;
}