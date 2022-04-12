#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <bsd/string.h>
#include <stdlib.h>
#include "libft.h"


void t_isalpha();
void t_isdigit();
void t_isalnum();
void t_isascii();
void t_isprint();
void t_tolower();
void t_toupper();
void t_memset();
void t_memcpy();
void t_memmove();
void t_memchr();
void t_memcmp();
void t_strlen();
void t_strlcpy();
void t_strchr();
void t_strlcat();

int main()
{
	//FT_ISALPHA
	//t_isalpha();

	//FT_ISDIGIT
	//t_isdigit();

	//FT_ISALNUM
	//t_isalnum();

	//FT_ISASCII()
	//t_isascii();

	//FT_ISPRINT
	//t_isprint();

	//FT_TOLOWER
	//t_tolower();

	//FT_TOUPPER
	//t_toupper();

	//FT_MEMSET
	//t_memset();

	//FT_MEMCPY
	//t_memcpy();

	//FT_MEMMOVE
	//t_memmove();

	//FT_MEMCHR
	//t_memchr();

	//FT_MEMCMP
    //t_memcmp();

	//FT_STRLEN
	//t_strlen();

	//FT_STRLCPY
	//t_strlcpy();

	//FT_STRCHR
	//t_strchr();

	//FT_STRLCAT 
	t_strlcat();
}

void t_strlcat()
{
	printf("-------------------------------------------------------------------------------------------------\n");
	printf("FT_STRLCAT\n\n");

	char str1[] = "World";
	char str2[12] = "Hello ";
	char *dest2 = strdup(str2);
	size_t n1 = 12;
	printf("input src: %s\n", str1);
	printf("input dest: %s\n", str2);
	printf("Expected output: %zu\n", strlcat(str2, str1, n1));
	printf("Received output: %zu\n", ft_strlcat(dest2, str1, n1));
	printf("output strlcat: %s\n", str2);
	printf("output ft_strlcat: %s\n\n", dest2);
	free(dest2);

	char str3[] = "0 1 2 3 4 5 6 7 8 9";
	char str4[38] = "a b c d e f g h i j";
	char *dest4 = strdup(str4);
	printf("input src: %s\n", str3);
	printf("input dest: %s\n", str4);
	printf("Expected output: %zu\n", strlcat(str4, str3, 38));
	printf("Received output: %zu\n", ft_strlcat(dest4, str3, 38));
	printf("output strlcat: %s\n", str4);
	printf("output ft_strlcar: %s\n\n", dest4);
	free(dest4);

	char str5[] = " strlcat";
	char str6[100] = "Testing function";
	char *dest6 = strdup(str6);
	printf("input src: %s\n", str5);
	printf("input dest: %s\n", str6);
	printf("Expected output: %zu\n", strlcat(str6, str5, 100));
	printf("Received output: %zu\n", ft_strlcat(dest6, str5, 100));
	printf("output strlcat: %s\n", str6);
	printf("output ft_strlcat: %s\n\n", dest6); 
	free(dest6);

	char str7[] = "tutu tutu tutu";
	char str8[] = "0 1 2 3 4 5 6 7 8 9 10";
	char *dest8 = strdup(str8);
	printf("input src: %s\n", str7);
	printf("input dest: %s\n", str8);
	printf("Expected output: %zu\n", strlcat(str8, str7, 0));
	printf("Received output: %zu\n", ft_strlcat(dest8, str7, 0));
	printf("output strlcat: %s\n", str8); 
	printf("output ft_strlcat: %s\n\n", dest8); 
	free(dest8);

	char str9[] = "funfandoooo ooo";
	char str10[] = "funfa";
	char *dest10 = strdup(str10);
	printf("input src: %s\n", str9);
	printf("input src: %s\n", str10);
	printf("Expected output: %zu\n", strlcat(str10, str9, 3));
	printf("Received output: %zu\n", ft_strlcat(dest10, str9, 3));
	printf("output strlcat: %s\n", str10);
	printf("output ft_strlcat: %s\n\n", dest10); 
	free(dest10);

	char str11[] = "ijklmnop"; //src
	char str12[40] = "abcdefgh"; //dest
	char *dest12 = strdup(str12);
	printf("input src: %s\n", str11);
	printf("input dest: %s\n", str12);
	printf("Expected output: %zu\n", strlcat(str12, str11, 40));
	printf("Received output: %zu\n", ft_strlcat(dest12, str11, 40));
	printf("output strlcat: %s\n", str12);
	printf("output ft_strlcat: %s\n\n", dest12);
	free(dest12);

	char str13[] = "sp";
	char str14[4] = "bh";
	char *dest14 = strdup(str14);
	printf("input src: %s\n", str13);
	printf("input dest: %s\n", str14);
	printf("Expected output: %zu\n", strlcat(str14, str13, 4));
	printf("Received output: %zu\n", ft_strlcat(dest14, str13, 4));
	printf("output strlcat: %s\n", str14);
	printf("output ft_strlcat: %s\n\n", dest14);
	free(dest14);	

	char str15[] = "abc";
	char str16[15];
	char *dest16 = strdup(str16);
	printf("input src: %s\n", str15);
	printf("input dest: [null]\n");
	printf("Expected output: %zu\n", strlcat(str16, str15, 15));
	printf("Received output: %zu\n", ft_strlcat(dest16, str15, 15));
	printf("output strlcat: %s\n", str16);
	printf("output ft_strlcat: %s\n\n", dest16);
	free(dest16);

	char str19[] = "ABCDEFG";
	char str20[15] = "abcdefg";
	char *dest20 = strdup(str20);
	printf("input src: %s\n", str19);
	printf("input dest: %s\n", str20);
	printf("Expected output: %zu\n", strlcat(str20, str19, 15));
	printf("Received output: %zu\n", ft_strlcat(dest20, str19, 15));
	printf("output strlcat: %s\n", str20);
	printf("output ft_strlcat: %s\n\n", dest20);
	free(dest20);

	printf("FT_STRLCAT\n");
	printf("-------------------------------------------------------------------------------------------------\n");
}

void t_strchr()
{
	printf("-------------------------------------------------------------------------------------------------\n");
	printf("FT_STRCHR\n\n");

	char str1[] = "Hello World";
	char s1 = 'H';
	printf("input: %s\n", str1);
	printf("search: %c\n", s1);
	printf("Expected output: %s\n", strchr(str1, s1));
	printf("Received output: %s\n\n", ft_strchr(str1, s1));

	char str2[] = "0 1 2 3 4 5 6 7 8 9";
	char s2 = '9';
	printf("input: %s\n", str2);
	printf("search: %c bytes: 18\n", s2);
	printf("Expected output: %s\n", strchr(str2, s2));
	printf("Received output: %s\n\n", ft_strchr(str2, s2));

	char str3[] = "Testing strchr";
	char s3 = 'P';
	printf("input: %s\n", str3);
	printf("search: %c bytes: 14\n", s3);
	printf("Expected output: %s\n", strchr(str3, s3));
	printf("Received output: %s\n\n", ft_strchr(str3, s3));

	char str4[] = "tutu tutu tutu tu";
	char s4 = 'u';
	printf("input: %s\n", str4);
	printf("search: %c bytes: 1\n", s4);
	printf("Expected output: %s\n", strchr(str4, s4));
	printf("Received output: %s\n\n", ft_strchr(str4, s4));

	char str5[] = "funfandoooo ooo";
	char s5 = ' ';
	printf("input: %s\n", str5);
	printf("search: %c bytes: 12\n", s5);
	printf("Expected output: %s\n", strchr(str5, s5));
	printf("Received output: %s\n\n", ft_strchr(str5, s5));

	char str6[] = "abcdefghijk";
	char s6 = 'm';
	printf("input: %s\n", str6);
	printf("search: %c\n", s6);
	printf("Expected output: %s\n", strchr(str6, s6));
	printf("Received output: %s\n\n", ft_strchr(str6, s6));

	char str7[] = "hello hello";
	char s7 = 'l';
	printf("input: %s\n", str7);
	printf("search: %c\n", s7);
	printf("Expected output: %s\n", strchr(str7, s7));
	printf("Received output: %s\n\n", ft_strchr(str7, s7));

	printf("FT_STRCHR\n");
	printf("-------------------------------------------------------------------------------------------------\n");

}

void t_strlcpy()
{
	printf("-------------------------------------------------------------------------------------------------\n");
	printf("FT_STRLCPY\n\n");

	char str1[] = "Hello World";
	char str2[] = "Abcd Efgh";
	size_t n1 = 11;
	printf("input src: %s\n", str1);
	printf("input dest: %s\n", str2);
	printf("bytes: 11\n");
	printf("Expected output: %zu\n", strlcpy(str2, str1, n1));
	printf("Received output: %zu\n", ft_strlcpy(str2, str1, n1));
	printf("output dest: %s\n\n", str2);

	char str3[] = "0 1 2 3 4 5 6 7 8 9";
	char str4[] = "a b c d e f g h i j";
	printf("input src: %s\n", str3);
	printf("input dest: %s\n", str4);
	printf("bytes: 5\n");
	printf("Expected output: %zu\n", strlcpy(str4, str3, 5));
	printf("Received output: %zu\n", ft_strlcpy(str4, str3, 5));
	printf("output dest: %s\n\n", str4);

	char str5[] = "strlcpy";
	char str6[] = "Testing function";
	printf("input src: %s\n", str5);
	printf("input dest: %s\n", str6);
	printf("bytes: 7\n");
	printf("Expected output: %zu\n", strlcpy(str6, str5, 7));
	printf("Received output: %zu\n", ft_strlcpy(str6, str5, 7));
	printf("output dest: %s\n\n", str6);

	char str7[] = "tutu tutu tutu";
	char str8[] = "0 1 2 3 4 5 6 7 8 9 10";
	printf("input src: %s\n", str7);
	printf("input dest: %s\n", str8);
	printf("bytes: 10\n");
	printf("Expected output: %zu\n", strlcpy(str8, str7, 20));
	printf("Received output: %zu\n", ft_strlcpy(str8, str7, 20));
	printf("output dest: %s\n\n", str8);

	char str9[] = "funfandoooo ooo";
	char str10[] = "funfa";
	printf("input src: %s\n", str9);
	printf("input src: %s\n", str10);
	printf("bytes: 15\n");
	printf("Expected output: %zu\n", strlcpy(str10, str9, 15));
	printf("Received output: %zu\n", ft_strlcpy(str10, str9, 15));
	printf("output dest: %s\n\n", str10);

	char str11[] = "abcdefgh";
	char str12[] = "aijklmnop";
	printf("input src: %s\n", str11);
	printf("input dest: %s\n", str12);
	printf("bytes: 3\n");
	printf("Expected output: %zu\n", strlcpy(str12, str11, 3));
	printf("Received output: %zu\n", ft_strlcpy(str12, str11, 3));
	printf("output dest: %s\n\n", str12);

	char str13[] = " ah";
	char str14[] = " h";
	printf("input src: %s\n", str13);
	printf("input dest: %s\n", str14);
	printf("bytes: 2\n");
	printf("Expected output: %zu\n", strlcpy(str14, str13, 2));
	printf("Received output: %zu\n", ft_strlcpy(str14, str13, 2));
	printf("output dest: %s\n\n", str14);

	char str15[] = "abc";
	char str16[15];
	printf("input src: %s\n", str15);
	printf("input dest: [null]\n");
	printf("bytes: 3\n");
	printf("Expected output: %zu\n", strlcpy(str16, str15, 3));
	printf("Received output: %zu\n", ft_strlcpy(str16, str15, 3));
	printf("output dest: %s\n\n", str16);

	char str19[] = "ABCDEFG";
	char str20[] = "abcdefg";
	printf("input src: %s\n", str19);
	printf("input dest: %s\n", str20);
	printf("bytes: 4\n");
	printf("Expected output: %zu\n", strlcpy(str20, str19, 4));
	printf("Received output: %zu\n", ft_strlcpy(str20, str19, 4));
	printf("output dest: %s\n\n", str20);

	printf("FT_STRLCPY\n");
	printf("-------------------------------------------------------------------------------------------------\n");

} 

void t_strlen()
{
	printf("-------------------------------------------------------------------------------------------------\n");
	printf("FT_STRLEN\n\n");

	const char *str1 = "Hello World";
	printf("input: %s\n", str1);
	printf("Expected output: %lu\n", strlen(str1));
	printf("Received output: %zu\n\n", ft_strlen(str1));

	const char *str2 = "0 1 2 3 4 5 6 7 8 9";
	printf("input: %s\n", str2);
	printf("Expected output: %lu\n", strlen(str2));
	printf("Received output: %zu\n\n", ft_strlen(str2));

	const char *str3 = "Testing strlen";
	printf("input: %s\n", str3);
	printf("Expected output: %lu\n", strlen(str3));
	printf("Received output: %zu\n\n", ft_strlen(str3));

	const char *str4 = "tutu tutu tutu tu";
	printf("input: %s\n", str4);
	printf("Expected output: %lu\n", strlen(str4));
	printf("Received output: %zu\n\n", ft_strlen(str4));

	const char *str5 = "funfandoooo ooo";
	printf("input: %s\n", str5);
	printf("Expected output: %lu\n", strlen(str5));
	printf("Received output: %zu\n\n", ft_strlen(str5));

	const char *str6 = "abcdefghijklm";
	printf("input: %s\n", str6);
	printf("Expected output: %lu\n", strlen(str6));
	printf("Received output: %zu\n\n", ft_strlen(str6));

	const char *str7 = " ";
	printf("input: [space]\n");
	printf("Expected output: %lu\n", strlen(str7));
	printf("Received output: %zu\n\n", ft_strlen(str7));

	const char *str8 = "a";
	printf("input: %s\n", str8);
	printf("Expected output: %lu\n", strlen(str8));
	printf("Received output: %zu\n\n", ft_strlen(str8));

	printf("FT_STRLEN\n");
	printf("-------------------------------------------------------------------------------------------------\n");

}

void t_memcmp()
{
	printf("-------------------------------------------------------------------------------------------------\n");
	printf("FT_MEMCMP\n\n");

	char str1[] = "Hello World";
	char str2[] = "Hello World";
	printf("input src: %s\n", str1);
	printf("input dest: %s\n", str2);
	printf("bytes: 11\n");
	printf("Expected output: %d\n", memcmp(str2, str1, 11));
	printf("Received output: %d\n\n", ft_memcmp(str2, str1, 11));

	char str3[] = "0 1 2 3 4 5 6 7 8 9";
	char str4[] = "0 1 2 3 4 5 a b c d e";
	printf("input src: %s\n", str3);
	printf("input dest: %s\n", str4);
	printf("bytes: 13\n");
	printf("Expected output: %d\n", memcmp(str4, str3, 13));
	printf("Received output: %d\n\n", ft_memcmp(str4, str3, 13));

	char str5[] = "Testing memcmp";
	char str6[] = "Testing function";
	printf("input src: %s\n", str5);
	printf("input dest: %s\n", str6);
	printf("bytes: 16\n");
	printf("Expected output: %d\n", memcmp(str6, str5, 16));
	printf("Received output: %d\n\n", ft_memcmp(str6, str5, 16));

	char str7[] = "tutu tutu tutu tu";
	char str8[] = "0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20";
	printf("input src: %s\n", str7);
	printf("input dest: %s\n", str8);
	printf("bytes: 10\n");
	printf("Expected output: %d\n", memcmp(str8, str7, 10));
	printf("Received output: %d\n\n", ft_memcmp(str8, str7, 10));

	char str9[] = "funfandoooo ooo";
	char str10[] = "funfandooooO ooo";
	printf("input src: %s\n", str9);
	printf("input src: %s\n", str10);
	printf("bytes: 15\n");
	printf("Expected output: %d\n", memcmp(str10, str9, 15));
	printf("Received output: %d\n\n", ft_memcmp(str10, str9, 15));

	//error
	char str11[] = "abcdefgh";
	char str12[] = "aijklmnop";
	printf("input src: %s\n", str11);
	printf("input dest: %s\n", str12);
	printf("bytes: 3\n");
	printf("Expected output: %d\n", memcmp(str12, str11, 3));
	printf("Received output: %d\n\n", ft_memcmp(str12, str11, 3));

	char str13[] = " ah";
	char str14[] = " hj";
	printf("input src: %s\n", str13);
	printf("input dest: %s\n", str14);
	printf("bytes: 1\n");
	printf("Expected output: %d\n", memcmp(str14, str13, 1));
	printf("Received output: %d\n\n", ft_memcmp(str14, str13, 1));

	char str15[] = "abc";
	char str16[] = "ab3";
	printf("input src: %s\n", str15);
	printf("input dest: %s\n", str16);
	printf("bytes: 3\n");
	printf("Expected output: %d\n", memcmp(str16, str15, 3));
	printf("Received output: %d\n\n", ft_memcmp(str16, str15, 3));

	//error?
	char str19[] = "fgHij";
	char str20[] = "fghije";
	printf("input src: %s\n", str19);
	printf("input dest: %s\n", str20);
	printf("bytes: 5\n");
	printf("Expected output: %d\n", memcmp(str20, str19, 5));
	printf("Received output: %d\n\n", ft_memcmp(str20, str19, 5));


	printf("FT_MEMCPY\n");
	printf("-------------------------------------------------------------------------------------------------\n");
}


void t_memchr()
{
	printf("-------------------------------------------------------------------------------------------------\n");
	printf("FT_MEMCHR\n\n");

	char str1[] = "Hello World";
	char s1 = 'H';
	printf("input: %s\n", str1);
	printf("Expected output: %s\n", (char *) memchr(str1, s1, 12));
	printf("Received output: %s\n\n", (char *) ft_memchr(str1, s1, 12));

	char str2[] = "0 1 2 3 4 5 6 7 8 9";
	char s2 = '9';
	printf("search: %c bytes: 18\n", s2);
	printf("Expected output: %s\n", (char *) memchr(str2, s2, 18));
	printf("Received output: %s\n\n", (char *) ft_memchr(str2, s2, 18));

	char str3[] = "Testing memchr";
	char s3 = 'P';
	printf("search: %c bytes: 14\n", s3);
	printf("Expected output: %s\n", (char *) memchr(str3, s3, 14));
	printf("Received output: %s\n\n", (char *) ft_memchr(str3, s3, 14));

	char str4[] = "tutu tutu tutu tu";
	char s4 = 'u';
	printf("search: %c bytes: 1\n", s4);
	printf("Expected output: %s\n", (char *) memchr(str4, s4, 1));
	printf("Received output: %s\n\n", (char *) ft_memchr(str4, s4, 1));

	char str5[] = "funfandoooo ooo";
	char s5 = ' ';
	printf("search: %c bytes: 12\n", s5);
	printf("Expected output: %s\n", (char *) memchr(str5, s5, 12));
	printf("Received output: %s\n\n", (char *) ft_memchr(str5, s5, 12));

	char str6[] = "abcdefghijk";
	char s6 = 'm';
	printf("search: %c bytes: 20\n", s6);
	printf("Expected output: %s\n", (char *) memchr(str6, s6, 20));
	printf("Received output: %s\n\n", (char *) ft_memchr(str6, s6, 20));

	char str7[] = "hello hello";
	char s7 = 'l';
	printf("search: %c bytes: 20\n", s7);
	printf("Expected output: %s\n", (char *) memchr(str7, s7, 20));
	printf("Received output: %s\n\n", (char *) ft_memchr(str7, s7, 20));

	printf("FT_MEMCHR\n");
	printf("-------------------------------------------------------------------------------------------------\n");
}

void t_memmove()
{
	printf("-------------------------------------------------------------------------------------------------\n");
	printf("FT_MEMMOVE\n\n");

	char str1[] = "Hello World";
	char str2[100];
	printf("input src: %s\n", str1);
	printf("input dest: %s\n", str2);
	printf("copied bytes: 11\n");
	printf("Expected output: %s\n", (char *) memmove(str2, str1, 11));
	printf("Received output: %s\n\n", (char *) ft_memmove(str2, str1, 11));

	char str3[] = "0 1 2 3 4 5 6 7 8 9";
	char str4[99];
	printf("input src: %s\n", str3);
	printf("input dest: [NULL]\n");
	printf("copied bytes: 3\n");
	printf("Expected output: %s\n", (char *) memmove(str4, str3, 3));
	printf("Received output: %s\n\n", (char *) ft_memmove(str4, str3, 3));

	char str5[] = "Testing memmove";
	char str6[10] = "0123456789";
	printf("input src: %s\n", str5);
	printf("input dest: %s\n", str6);
	printf("copied bytes: 7\n");
	printf("Expected output: %s\n", (char *) memmove(str6, str5, 7));
	printf("Received output: %s\n\n", (char *) ft_memmove(str6, str5, 7));

	char str7[] = "tutu tutu tutu tu";
	char str8[60] = "0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20";
	printf("input src: %s\n", str7);
	printf("input dest: %s\n", str8);
	printf("copied bytes: 10\n");
	printf("Expected output: %s\n", (char *) memmove(str8, str7, 10));
	printf("Received output: %s\n\n", (char *) ft_memmove(str8, str7, 10));

	char str9[] = "funfandoooo ooo";
	char str10[100];
	printf("input src: %s\n", str9);
	printf("input src: [NULL]\n");
	printf("copied bytes: 5\n");
	printf("Expected output: %s\n", (char *) memmove(str10, str9, 5));
	printf("Received output: %s\n\n", (char *) ft_memmove(str10, str9, 5));

	char str11[20] = "abcdefgh";
	char str12[20] = "ijklmnop";
	printf("input src: %s\n", str11);
	printf("input dest: %s\n", str12);
	printf("copied bytes: 0\n");
	printf("Expected output: %s\n", (char *) memmove(str12, str11, 0));
	printf("Received output: %s\n\n", (char *) ft_memmove(str12, str11, 0));

	int str13[10] = {1, 2, 3, 4, 5};
	int str14[10] = {6, 7, 8, 9, 10};
	printf("input src: ");
	for (int i = 0; i < 5; i++)
		printf("%d ", str13[i]);
	printf("\n");
	printf("input dest: ");
	for (int i = 0; i < 5; i++)
		printf("%d ", str14[i]);
	printf("\n");

	printf("copied bytes: 4\n");
	printf("Expected output: %s\n", (char *) memmove(str14, str13, 4*sizeof(int)));
	printf("Received output: %s\n\n", (char *) ft_memmove(str14, str13, 4*sizeof(int)));

	char str15[5] = "abc";
	char str16[3] = "123";
	printf("input src: %s\n", str15);
	printf("input dest: %s\n", str16);
	printf("copied bytes: 3\n");
	printf("Expected output: %s\n", (char *) memmove(str16, str15, 3));
	printf("Received output: %s\n\n", (char *) ft_memmove(str16, str15, 3));

	char str19[5] = "fghij";
	char str20[10] = "abcde";
	printf("input src: %s\n", str19);
	printf("input dest: %s\n", str20);
	printf("copied bytes: 2\n");
	printf("Expected output: %s\n", (char *) memmove(str20, str19, 2));
	printf("Received output: %s\n\n", (char *) ft_memmove(str20, str19, 2));


	printf("FT_MEMMOVE\n");
	printf("-------------------------------------------------------------------------------------------------\n");
} 

void t_memcpy()
{
	printf("-------------------------------------------------------------------------------------------------\n");
	printf("FT_MEMCPY\n\n");

	char str1[] = "Hello World";
	char str2[100];
	printf("input src: %s\n", str1);
	printf("input dest: %s\n", str2);
	printf("copied bytes: 11\n");
	printf("Expected output: %s\n", (char *) memcpy(str2, str1, 11));
	printf("Received output: %s\n\n", (char *) ft_memcpy(str2, str1, 11));

	char str3[] = "0 1 2 3 4 5 6 7 8 9";
	char str4[10];
	printf("input src: %s\n", str3);
	printf("input dest: [NULL]\n");
	printf("copied bytes: 3\n");
	printf("Expected output: %s\n", (char *) memcpy(str4, str3, 3));
	printf("Received output: %s\n\n", (char *) ft_memcpy(str4, str3, 3));

	char str5[] = "Testing memcpy";
	char str6[10] = "0123456789";
	printf("input src: %s\n", str5);
	printf("input dest: %s\n", str6);
	printf("copied bytes: 7\n");
	printf("Expected output: %s\n", (char *) memcpy(str6, str5, 7));
	printf("Received output: %s\n\n", (char *) ft_memcpy(str6, str5, 7));

	char str7[] = "tutu tutu tutu tu";
	char str8[60] = "0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20";
	printf("input src: %s\n", str7);
	printf("input dest: %s\n", str8);
	printf("copied bytes: 10\n");
	printf("Expected output: %s\n", (char *) memcpy(str8, str7, 10));
	printf("Received output: %s\n\n", (char *) ft_memcpy(str8, str7, 10));

	char str9[] = "funfandoooo ooo";
	char str10[100];
	printf("input src: %s\n", str9);
	printf("input src: [NULL]\n");
	printf("copied bytes: 5\n");
	printf("Expected output: %s\n", (char *) memcpy(str10, str9, 5));
	printf("Received output: %s\n\n", (char *) ft_memcpy(str10, str9, 5));

	char str11[20] = "abcdefgh";
	char str12[20] = "ijklmnop";
	printf("input src: %s\n", str11);
	printf("input dest: %s\n", str12);
	printf("copied bytes: 0\n");
	printf("Expected output: %s\n", (char *) memcpy(str12, str11, 0));
	printf("Received output: %s\n\n", (char *) ft_memcpy(str12, str11, 0));

	int str13[10] = {1, 2, 3, 4, 5};
	int str14[10] = {6, 7, 8, 9, 10};
	printf("input src: ");
	for (int i = 0; i < 5; i++)
		printf("%d ", str13[i]);
	printf("\n");
	printf("input dest: ");
	for (int i = 0; i < 5; i++)
		printf("%d ", str14[i]);
	printf("\n");

	printf("copied bytes: 4\n");
	printf("Expected output: %s\n", (char *) memcpy(str14, str13, 4*sizeof(int)));
	printf("Received output: %s\n\n", (char *) ft_memcpy(str14, str13, 4*sizeof(int)));

	char str15[5] = "abc";
	char str16[3] = "123";
	printf("input src: %s\n", str15);
	printf("input dest: %s\n", str16);
	printf("copied bytes: 3\n");
	printf("Expected output: %s\n", (char *) memcpy(str16, str15, 3));
	printf("Received output: %s\n\n", (char *) ft_memcpy(str16, str15, 3));

	/*char str17[5] = "12345";
	char str18[3] = "123";
	printf("input src: %s\n", str17);
	printf("input dest: %s\n", str18);
	printf("copied bytes: 5\n");
	printf("Expected output: %s\n", (char *) memcpy(str18, str17, 5));
	printf("Received output: %s\n\n", (char *) ft_memcpy(str18, str17, 5));*/

	char str19[5] = "fghij";
	char str20[10] = "abcde";
	printf("input src: %s\n", str19);
	printf("input dest: %s\n", str20);
	printf("copied bytes: 5\n");
	printf("Expected output: %s\n", (char *) memcpy(str20, str19, 10));
	printf("Received output: %s\n\n", (char *) ft_memcpy(str20, str19, 10));


	printf("FT_MEMCPY\n");
	printf("-------------------------------------------------------------------------------------------------\n");
}

void t_memset()
{
	printf("-------------------------------------------------------------------------------------------------\n");
	printf("FT_MEMSET\n\n");

	char str1[] = "Hello World";
	printf("input: %s\n", str1);
	printf("Expected output: %s\n", (char *) memset(str1, '.', 5*sizeof(char)));
	printf("Received output: %s\n\n", (char *) ft_memset(str1, '.', 5*sizeof(char)));

	char str2[] = "0 1 2 3 4 5 6 7 8 9";
	printf("input: %s\n", str2);
	printf("Expected output: %s\n", (char *) memset(str2, 'A', 2*sizeof(char)));
	printf("Received output: %s\n\n", (char *) ft_memset(str2, 'A', 2*sizeof(char)));

	char str3[] = "Testing memset";
	printf("input: %s\n", str3);
	printf("Expected output: %s\n", (char *) memset(str3, '*', 14*sizeof(char)));
	printf("Received output: %s\n\n", (char *) ft_memset(str3, '*', 14*sizeof(char)));

	char str4[] = "tutu tutu tutu tu";
	printf("input: %s\n", str4);
	printf("Expected output: %s\n", (char *) memset(str4, '0', 9*sizeof(char)));
	printf("Received output: %s\n\n", (char *) ft_memset(str4, '0', 9*sizeof(char)));

	char str5[] = "funfandoooo ooo";
	printf("input: %s\n", str5);
	printf("Expected output: %s\n", (char *) memset(str5, '+', 7*sizeof(char)));
	printf("Received output: %s\n\n", (char *) ft_memset(str5, '+', 7*sizeof(char)));

	char str6[20];
	printf("input: empty 20 bytes char array\n");
	printf("Expected output: %s\n", (char *) memset(str6, '=', 20));
	printf("Received output: %s\n\n", (char *) ft_memset(str6, '=', 20));

	int str7[10];
	printf("input: empty 10 bytes int array\n");
	printf("Expected output: %s\n", (char *) memset(str7, 'Z', 10* sizeof(int)));
	printf("Received output: %s\n\n", (char *) ft_memset(str7, 'Z', 10* sizeof(int)));
	/*int str6[] = {1, 2, 3, 4, 5};
	printf("input: ");
	for (int i = 0; i < 5; i++)
	{
		printf("%d ", str6[i]);
	}
	printf("\n");
	printf("Expected output: %s\n", (char *) memset(str6, 'A', 3*sizeof(char)));
	printf("Received output: %s\n\n", (char *) ft_memset(str6, 'A', 3*sizeof(char))); */

	printf("FT_MEMSET\n");
	printf("-------------------------------------------------------------------------------------------------\n");
}



void t_toupper()
{
	printf("-------------------------------------------------------------------------------------------------\n");
	printf("FT_UPPER\n\n");

	char a = 'C';
	printf("input: %c\n", a);
	printf("Expected output: %d\n", toupper(a));
	printf("Received output: %d\n\n", ft_toupper(a));

	char b = 'K'; 
	printf("input: %c\n", b);
	printf("Expected output: %d\n", toupper(b));
	printf("Received output: %d\n\n", ft_toupper(b));

	char c = '0'; 
	printf("input: %c\n", c);
	printf("Expected output: %d\n", toupper(c));
	printf("Received output: %d\n\n", ft_toupper(c));

	char d = '?';
	printf("input: %c\n", d);
	printf("Expected output: %d\n", toupper(d));
	printf("Received output: %d\n\n", ft_toupper(d));

	char g = '\t';
	printf("input: [tab]\n");
	printf("Expected output: %d\n", toupper(g));
	printf("Received output: %d\n\n", ft_toupper(g));

	char h = 'l';
	printf("input: %d %c\n", h, h);
	printf("Expected output: %d\n", toupper(h));
	printf("Received output: %d\n\n", ft_toupper(h));

	char i = 'd';
	printf("input: %d %c\n", i, i);
	printf("Expected output: %d\n", toupper(i));
	printf("Received output: %d\n\n", ft_toupper(i));

	char j = 'w';
	printf("input: %d %c\n", j, j);
	printf("Expected output: %d\n", toupper(j));
	printf("Received output: %d\n\n", ft_toupper(j));

	printf("FT_TOUPPER\n");
	printf("-------------------------------------------------------------------------------------------------\n");
}


void t_tolower()
{
	printf("-------------------------------------------------------------------------------------------------\n");
	printf("FT_TOLOWER\n\n");

	char a = 'c';
	printf("input: %c\n", a);
	printf("Expected output: %d\n", tolower(a));
	printf("Received output: %d\n\n", ft_tolower(a));

	char b = 'k'; 
	printf("input: %c\n", b);
	printf("Expected output: %d\n", tolower(b));
	printf("Received output: %d\n\n", ft_tolower(b));

	char c = '0'; 
	printf("input: %c\n", c);
	printf("Expected output: %d\n", tolower(c));
	printf("Received output: %d\n\n", ft_tolower(c));

	char d = '?';
	printf("input: %c\n", d);
	printf("Expected output: %d\n", tolower(d));
	printf("Received output: %d\n\n", ft_tolower(d));

	char g = '\t';
	printf("input: [tab]\n");
	printf("Expected output: %d\n", tolower(g));
	printf("Received output: %d\n\n", ft_tolower(g));

	char h = 'L';
	printf("input: %d %c\n", h, h);
	printf("Expected output: %d\n", tolower(h));
	printf("Received output: %d\n\n", ft_tolower(h));

	char i = 'D';
	printf("input: %d %c\n", i, i);
	printf("Expected output: %d\n", tolower(i));
	printf("Received output: %d\n\n", ft_tolower(i));

	char j = 'W';
	printf("input: %d %c\n", j, j);
	printf("Expected output: %d\n", tolower(j));
	printf("Received output: %d\n\n", ft_tolower(j));

	printf("FT_TOLOWER\n");
	printf("-------------------------------------------------------------------------------------------------\n");

}



void t_isprint()
{
	printf("-------------------------------------------------------------------------------------------------\n");
	printf("FT_ISASCII\n\n");

	char a = 'c';
	printf("input: %c\n", a);
	printf("Expected output: %d\n", isprint(a));
	printf("Received output: %d\n\n", ft_isprint(a));

	char b = '1'; 
	printf("input: %c\n", b);
	printf("Expected output: %d\n", isprint(b));
	printf("Received output: %d\n\n", ft_isprint(b));

	char c = '0'; 
	printf("input: %c\n", c);
	printf("Expected output: %d\n", isprint(c));
	printf("Received output: %d\n\n", ft_isprint(c));

	char d = '7';
	printf("input: %c\n", d);
	printf("Expected output: %d\n", isprint(d));
	printf("Received output: %d\n\n", ft_isprint(d));

	char g = 'A'; //1024
	printf("input: %c\n", g);
	printf("Expected output: %d\n", isprint(g));
	printf("Received output: %d\n\n", ft_isprint(g));

	char h = '\t'; //0
	printf("input: [tab]\n");
	printf("Expected output: %d\n", isprint(h));
	printf("Received output: %d\n\n", ft_isprint(h));

	char i = ')';
	printf("input: %c\n", i);
	printf("Expected output: %d\n", isprint(i));
	printf("Received output: %d\n\n", ft_isprint(i));

	char j = '\0'; //1024
	printf("input: [null]\n");
	printf("Expected output: %d\n", isprint(j));
	printf("Received output: %d\n\n", ft_isprint(j));

	char k = '%'; //0
	printf("input: %c\n", k);
	printf("Expected output: %d\n", isprint(k));
	printf("Received output: %d\n\n", ft_isprint(k));

	char l = ' '; //0
	printf("input: [space]\n");
	printf("Expected output: %d\n", isprint(l));
	printf("Received output: %d\n\n", ft_isprint(l));

	char m = '\r'; //0
	printf("input: [carriage return]\n");
	printf("Expected output: %d\n", isprint(m));
	printf("Received output: %d\n\n", ft_isprint(m));

	int n = 127;
	printf("input: [del]\n");
	printf("Expected output: %d\n", isprint(n));
	printf("Received output: %d\n\n", ft_isprint(n));

	char o = '\b'; //0
	printf("input: [backspace]\n");
	printf("Expected output: %d\n", isprint(o));
	printf("Received output: %d\n\n", ft_isprint(o));


	printf("FT_ISASCII\n");
	printf("-------------------------------------------------------------------------------------------------\n");
}



void t_isascii()
{
	printf("-------------------------------------------------------------------------------------------------\n");
	printf("FT_ISASCII\n\n");

	char a = 'c';
	printf("input: %c\n", a);
	printf("Expected output: %d\n", isascii(a));
	printf("Received output: %d\n\n", ft_isascii(a));

	char b = '1'; 
	printf("input: %c\n", b);
	printf("Expected output: %d\n", isascii(b));
	printf("Received output: %d\n\n", ft_isascii(b));

	char c = '0'; 
	printf("input: %c\n", c);
	printf("Expected output: %d\n", isascii(c));
	printf("Received output: %d\n\n", ft_isascii(c));

	char d = '7';
	printf("input: %c\n", d);
	printf("Expected output: %d\n", isascii(d));
	printf("Received output: %d\n\n", ft_isascii(d));

	char g = 'A'; //1024
	printf("input: %c\n", g);
	printf("Expected output: %d\n", isascii(g));
	printf("Received output: %d\n\n", ft_isascii(g));

	char h = '\t'; //0
	printf("input: [tab]\n");
	printf("Expected output: %d\n", isascii(h));
	printf("Received output: %d\n\n", ft_isascii(h));

	char i = ')';  //1024
	printf("input: %c\n", i);
	printf("Expected output: %d\n", isascii(i));
	printf("Received output: %d\n\n", ft_isascii(i));

	char j = '\0'; //1024
	printf("input: [null]\n");
	printf("Expected output: %d\n", isascii(j));
	printf("Received output: %d\n\n", ft_isascii(j));

	char k = '%'; //0
	printf("input: %c\n", k);
	printf("Expected output: %d\n", isascii(k));
	printf("Received output: %d\n\n", ft_isascii(k));

	char l = ' '; //0
	printf("input: [space]\n");
	printf("Expected output: %d\n", isascii(l));
	printf("Received output: %d\n\n", ft_isascii(l));

	int m = 229; //0
	printf("input: [Õ]\n");
	printf("Expected output: %d\n", isascii(m));
	printf("Received output: %d\n\n", ft_isascii(m));

	int n = 255; //0
	printf("input: [255]\n");
	printf("Expected output: %d\n", isascii(n));
	printf("Received output: %d\n\n", ft_isascii(n));

	int o = 177; //0
	printf("input: [_]\n");
	printf("Expected output: %d\n", isascii(o));
	printf("Received output: %d\n\n", ft_isascii(o));

	int p = 128; //0
	printf("input: [Ç]\n");
	printf("Expected output: %d\n", isascii(p));
	printf("Received output: %d\n\n", ft_isascii(p));


	printf("FT_ISASCII\n");
	printf("-------------------------------------------------------------------------------------------------\n");
}



void t_isalnum()
{
	printf("-------------------------------------------------------------------------------------------------\n");
	printf("FT_ISALNUM\n\n");

	char a = 'c';
	printf("input: %c\n", a);
	printf("Expected output: %d\n", isalnum(a));
	printf("Received output: %d\n\n", ft_isalnum(a));

	char b = '1'; 
	printf("input: %c\n", b);
	printf("Expected output: %d\n", isalnum(b));
	printf("Received output: %d\n\n", ft_isalnum(b));

	char c = '0'; 
	printf("input: %c\n", c);
	printf("Expected output: %d\n", isalnum(c));
	printf("Received output: %d\n\n", ft_isalnum(c));

	char d = '7';
	printf("input: %c\n", d);
	printf("Expected output: %d\n", isalnum(d));
	printf("Received output: %d\n\n", ft_isalnum(d));

	char g = 'A'; //1024
	printf("input: %c\n", g);
	printf("Expected output: %d\n", isalnum(g));
	printf("Received output: %d\n\n", ft_isalnum(g));

	char h = '1'; //0
	printf("input: %c\n", h);
	printf("Expected output: %d\n", isalnum(h));
	printf("Received output: %d\n\n", ft_isalnum(h));

	char i = ')';  //1024
	printf("input: %c\n", i);
	printf("Expected output: %d\n", isalnum(i));
	printf("Received output: %d\n\n", ft_isalnum(i));

	char j = ','; //1024
	printf("input: %c\n", j);
	printf("Expected output: %d\n", isalnum(j));
	printf("Received output: %d\n\n", ft_isalnum(j));

	char k = '%'; //0
	printf("input: %c\n", k);
	printf("Expected output: %d\n", isalnum(k));
	printf("Received output: %d\n\n", ft_isalnum(k));

	char l = ' '; //0
	printf("input: [space]\n");
	printf("Expected output: %d\n", isalnum(l));
	printf("Received output: %d\n\n", ft_isalnum(l));



	printf("FT_ISALNUM\n");
	printf("-------------------------------------------------------------------------------------------------\n");
} 


void t_isdigit()
{
	printf("-------------------------------------------------------------------------------------------------\n");
	printf("FT_ISDIGIT\n\n");

	char a = 'c';
	printf("input: %c\n", a);
	printf("Expected output: %d\n", isdigit(a));
	printf("Received output: %d\n\n", ft_isdigit(a));

	char b = '1'; 
	printf("input: %c\n", b);
	printf("Expected output: %d\n", isdigit(b));
	printf("Received output: %d\n\n", ft_isdigit(b));

	char c = '0'; 
	printf("input: %c\n", c);
	printf("Expected output: %d\n", isdigit(c));
	printf("Received output: %d\n\n", ft_isdigit(c));

	char d = '7';
	printf("input: %c\n", d);
	printf("Expected output: %d\n", isdigit(d));
	printf("Received output: %d\n\n", ft_isdigit(d));

	char e = '%'; 
	printf("input: %c\n", e);
	printf("Expected output: %d\n", isdigit(e));
	printf("Received output: %d\n\n", ft_isdigit(e));

	char f = ' '; 
	printf("input: [space]\n");
	printf("Expected output: %d\n", isdigit(f));
	printf("Received output: %d\n\n", ft_isdigit(f));


	printf("FT_ISDIGIT\n");
	printf("-------------------------------------------------------------------------------------------------\n");
}



void t_isalpha()
{
	printf("-------------------------------------------------------------------------------------------------\n");
	printf("FT_ISALPHA\n\n");

	char a = 'A'; //1024
	printf("input: %c\n", a);
	printf("Expected output: %d\n", isalpha(a));
	printf("Received output: %d\n\n", ft_isalpha(a));

	char b = '1'; //0
	printf("input: %c\n", b);
	printf("Expected output: %d\n", isalpha(b));
	printf("Received output: %d\n\n", ft_isalpha(b));

	char c = 'z';  //1024
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

