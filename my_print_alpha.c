#include <unistd.h>

void    my_putchar(char c)
{
	write(1, &c, 1);
}

int     my_print_alpha(void)
{
    char c = 'a';
    while (c <= 'z')
    {
        my_putchar(c);
        c++;
    }
    return 0;
}

int     main()
{
    my_print_alpha();
    return 0;
}