
#include <fcntl.h>
#include <stdio.h>
#include "libft.h"

int	main(void)
{
	printf("----------------------------------\n\n");

	printf("ft_isalpha: %d\n", ft_isalpha(79));
	printf("ft_isdigit: %d\n", ft_isdigit(57));
	printf("ft_isalnum: %d\n", ft_isalnum(157));
	printf("ft_isascii: %d\n", ft_isascii(320));
	printf("ft_isprint: %d\n", ft_isprint(120));
	printf("ft_strlen: %zu\n", ft_strlen("abdul 123"));

	char str1[] = "abdulka";
	printf("ft_memset: %s\n", ft_memset(str1, 53, 3));

	char str2[] = "abdulka";
	ft_bzero(str2, 3);
	printf("ft_bzero: %s\n", str2);

	char str3[] = "abdulka";
	printf("ft_memcpy: %s\n", ft_memcpy(str3, (str3 + 2), 4));

	char str4[] = "abdulka";
	printf("ft_memcpy: %s\n", ft_memcpy((str4 + 3), str4, 2));

	char str5[] = "abdulka";
	printf("ft_memmove: %s\n", ft_memmove(str5, (str5 + 2), 4));

	char str6[] = "abdulka";
	printf("ft_memmove: %s\n", ft_memmove((str6 + 3), str6, 2));

	char *str7 = "abdulka-abdUlka";
	printf("ft_strchr: %s\n", ft_strchr(str7, 'd'));

	char *str8 = "0";
	printf("ft_strrchr: %s\n", ft_strrchr(str8, '0'));

	printf("ft_strncmp: %d\n", ft_strncmp("istanbul", "ist", 4));

	printf("ft_memchr: %p\n", ft_memchr("42istanbul", 'n', 8));

	printf("ft_memcmp: %d\n", ft_memcmp("", "ist", 5));

	printf("ft_strnstr: %s\n", ft_strnstr("42istanbul", "", 3));

	printf("ft_atoi: %d\n", ft_atoi("    -192663xs12d"));

	printf("ft_strdup: %s\n", ft_strdup("43ankara"));

	printf("ft_substr: %s\n", ft_substr("44samsun", 2, 4));

	printf("ft_strjoin: %s\n", ft_strjoin("42", "istanbul"));

	printf("ft_strtrim: %s\n", ft_strtrim("aaaaaa", "a"));

	char **str_arr = ft_split("      split       this for   me  !       ", ' ');  // ft_split
	int i = 0;                                // ft_split
	while (str_arr[i] != 0)                   // ft_split
	{                                         // ft_split
		printf("ft_split: %s\n", str_arr[i]); // ft_split
		i++;                                  // ft_split
	}                                         // ft_split

	printf("ft_itoa: %s\n", ft_itoa(-1923));

	// S_IRWXU Dosya sahibi okuyabilir, yazabilir ve çalıştırabilir.
	// O_RDONLY Sadece okumak için
	// O_WRONLY Sadece yazmak için
	// O_RDWR Hem yazmak hem okumak için
	int fd = open("42.txt", O_CREAT | O_WRONLY, S_IRWXU);
	ft_putchar_fd('s', fd);
	ft_putchar_fd('4', fd);
	ft_putchar_fd('2', fd);
	close(fd);

	int a = -5;
	size_t b = a;

	printf("%zu\n", b);

	printf("\n----------------------------------\n");
}
