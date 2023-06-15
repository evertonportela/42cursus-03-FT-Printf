
char	*ft_strchr(const char *s, int c)
{
	int	index;

	index = 0;
	c = (unsigned char)c;
	if (s[index] == 0)
		return ((char *)s);
	while (s[index])
	{
		if (s[index] == c)
		{
			return ((char *)s + index);
		}
		else if (s[index + 1] == c)
		{
			return ((char *)s + (index + 1));
		}
		index++;
	}
	return (NULL);
}