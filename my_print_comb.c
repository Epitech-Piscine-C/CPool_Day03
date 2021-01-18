#include <unistd.h>

void    my_putchar(char c)
{
	write(1, &c, 1);
}

int     display_comb(char a, char b, char c)
{
    my_putchar(a);
    my_putchar(b);
    my_putchar(c);
    if (a != '7')
    {
        my_putchar(',');
        my_putchar(' ');
    }
    return 0;
}

int     my_print_comb(void)
{
    char a;
    char b;
    char c;

    a = '0';
    while (a <= '9')
    {
        b = a + 1;
        while (b <= '9')
        {
            c = b + 1;
            while (c <= '9')
            {
                display_comb(a, b, c);
                c++;
            }
            b++;
        }
        a++;
    }
    return 0;
}

int     main()
{
    my_print_comb();
    return 0;
}