int			ft_strlen(char *str)
{
	int		i;
	
	i = 0;
	while(str[i] != '\0')
		i++;
	return (i);
}

char		ft_strcpy(char *dest, char *src)
{
	int		i;
	char	temp;
	int		j;

	i = 0;
	j = ft_strlen(src);
	while (dest[i] != '\0' && i < j)
	{
		temp = src[j];
		src[j] = dest[i];
		dest[i] = temp;
		i++;
		j--;
	}
	return (dest);
}

char		*ft_strdup(char *src)
{
	char *str;
	int	len;

	*str = malloc(ft_strlen(src) + 1);
	if (str == NULL)
		return (NULL);
	strcpy(str, src);
	return (str);
}
