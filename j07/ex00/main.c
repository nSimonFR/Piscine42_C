#include <string.h>
#include <stdio.h>

char *ft_strdup(char *src);
void ft_putstr(char *a);

int main(void)
{
	char str[15] = "Hello world";
	ft_putstr(ft_strdup(str));
	ft_putstr(strdup(str));
}
