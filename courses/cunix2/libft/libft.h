#include <stdlib.h>

void ft_bzero(void *s, size_t n);
char *ft_strdup(const char *str);
int ft_strncmp(const char *str1, const char *str2, size_t num);
char *ft_strchr(const char *str, int chr);
char *ft_strrchr(const char *str, int chr);
int ft_isalpha(int chr);
int ft_isdigit(int chr);
int ft_isascii(int chr);
int ft_toupper(int chr);
int ft_tolower(int chr);
int ft_abs(int x);
div_t ft_div(int numer, int denom);
char *ft_strstr(const char *str, const char *substr);
char *ft_strnstr(const char *str, const char *substr, size_t len);
void *ft_memset(void *str, int chr, size_t n);
void *ft_memcpy(void *dest, const void *src, size_t n);
void *ft_memccpy(void *dest, const void *src, int chr, size_t n);
void *ft_memmove(void *str1, const void *str2, size_t n);
void *ft_memchr(const void *str, int chr, size_t n);
int ft_memcmp(const void *str1, const void *str2, size_t n);
void ft_striter(char *s, void (*f)(char *));
char *ft_strmap(char const *s, char (*f)(char));
char *ft_strsub(char const *s, unsigned int start, size_t len);
char *ft_strjoin(char const *s1, char const *s2);
char *ft_strtrim(char const *s);
char **ft_strsplit(char const *s, char c);
