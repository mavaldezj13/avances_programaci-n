#include <unistd.h>

void	ft_putchar(char c)
{
	c = 77;
	write (1, &c, 1);
	write (1,"\n", 1);
}

int	main(void)
{
	ft_putchar('l');
	return (0);
}
