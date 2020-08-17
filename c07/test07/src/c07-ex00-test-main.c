
	#include <stdio.h>
	#include <stdarg.h>
	#include <string.h>
	#include <stdlib.h>

int			ft_strlen(char *str);
char		ft_strcpy(char *dest, char *src);
char		*ft_strdup(char *src);

int main()
{
		char* p = ft_strdup("Hello World!");
	printf("content: %s\n", p);
	printf("len: %lu\n", strlen(p));
}
