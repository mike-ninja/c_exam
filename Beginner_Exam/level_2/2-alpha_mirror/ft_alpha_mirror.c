#include <stdio.h>

int	main(int argc, char **argv)
{
	int	index;
	char	alph;

	index = 0;
	if (argc != 2)
		return (0);
	while (argv[1][index] != '\0')
	{
		if (argv[1][index] >= 97 && argv[1][index] <= 122)
		{
			alph = argv[1][index] % 97;
			printf("%c", 122 - alph);
		}
		else if (argv[1][index] >= 65 && argv[1][index] <= 90)
		{
			alph = argv[1][index] % 65;
			printf("%c", 90 - alph);
		}
		else
			printf("%c", argv[1][index]);
		index++;
	}
	printf("\n");
	return (1);
}
