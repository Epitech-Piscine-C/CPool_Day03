#include <unistd.h>

void    my_putchar(char c)
{
	write(1, &c, 1);
}

int     my_print_revalpha(void)
{
    char c;
    
    c = 'z';
    while (c >= 'a')
    {
        my_putchar(c);
        c--;
    }
    return 0;
}

int     main()
{
    my_print_revalpha();
    return 0;
}