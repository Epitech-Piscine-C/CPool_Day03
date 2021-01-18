#include <unistd.h>

void    my_putchar(char c)
{
	write(1, &c, 1);
}

int     display_comb2(char a1, char a2, char b1, char b2)
{
    if (b1 != '0' || b2 != '1')
    {
        my_putchar(',');
        my_putchar(' ');
    }
    my_putchar(a1);
    my_putchar(a2);
    my_putchar(' ');
    my_putchar(b1);
    my_putchar(b2);

    return 0;
}

int     my_print_comb2(void)
{
    char a1;
    char a2;
    char b1;
    char b2;

    a1 = '0';
    while (a1 <= '9')
    {
        a2 = '0';
        while (a2 <= '9')
        {
            b1 = '0';
            while (b1 <= '9')
            {
                b2 = a2;
                while (++b2 <= '9')
                    display_comb2(a1, a2, b1, b2);
                b1++;
            }
            a2++;
        }
        a1++;
    }
    return 0;
}

int     main()
{
    my_print_comb2();
    return 0;
}