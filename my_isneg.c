#include <unistd.h>

void    my_putchar(char c)
{
	write(1, &c, 1);
}

int     my_isneg(int n)
{
    if (n >= 0)
        my_putchar('P');
    else
        my_putchar('N');
    return 0;
}

int     main()
{
    my_isneg(-10);
    my_putchar('\n');
    my_isneg(0);
    my_putchar('\n');
    my_isneg(10);
    my_putchar('\n');
    return 0;
}