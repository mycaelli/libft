#include <ctype.h>
#include <stdio.h>

#include "libft.h"
//#include "ft_isalpha.c"


void t_isalpha();

int main()
{
	//FT_ISALPHA
	t_isalpha();
}

void t_isalpha()
{
	printf("-------------------------------------------------------------------------------------------------\n");
	printf("FT_ISALPHA\n\n");

	char a = 'c'; //1024
	printf("input: %c\n", a);
	printf("Expected output: %d\n", isalpha(a));
	printf("Received output: %d\n\n", ft_isalpha(a));

	char b = '1'; //0
	printf("input: %c\n", b);
	printf("Expected output: %d\n", isalpha(b));
	printf("Received output: %d\n\n", ft_isalpha(b));

	char c = 'l';  //1024
	printf("input: %c\n", c);
	printf("Expected output: %d\n", isalpha(c));
	printf("Received output: %d\n\n", ft_isalpha(c));

	char d = 'K'; //1024
	printf("input: %c\n", d);
	printf("Expected output: %d\n", isalpha(d));
	printf("Received output: %d\n\n", ft_isalpha(d));

	char e = '%'; //0
	printf("input: %c\n", e);
	printf("Expected output: %d\n", isalpha(e));
	printf("Received output: %d\n\n", ft_isalpha(e));

	char f = ' '; //0
	printf("input: [space]\n");
	printf("Expected output: %d\n", isalpha(f));
	printf("Received output: %d\n\n", ft_isalpha(f));

	printf("FT_ISALPHA\n");
	printf("-------------------------------------------------------------------------------------------------\n");
}