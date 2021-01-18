#include <unistd.h>

void    my_putchar(char c)
{
	write(1, &c, 1);
}

int     my_print_digits(void)
{
    char c;
    
    c = '0';
    while (c <= '9')
    {
        my_putchar(c);
        c++;
    }
    return 0;
}

int     main()
{
    my_print_digits();
    return 0;
}