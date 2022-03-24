#include <unistd.h>
#include <stdio.h>

int	main(void)
{
	int i;
	char	*tmp;
	
	i = 0;
	tmp = "Hello World!\n";
	while (tmp[i] != '\0')
	{
		write(1, &tmp[i], 1);
		i++;
	}
	printf("%i\n", i);
	return (0);
}

