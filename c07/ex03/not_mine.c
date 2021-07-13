char		*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		j;
	int		str;
	char	*strcopy;
	strcopy = (char *)malloc(sizeof(strs));
	if (!strcopy)
		return (NULL);
	i = 0;
	str = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
			strcopy[str++] = strs[i][j++];
		j = 0;
		while (sep[j] && i != size - 1)
			strcopy[str++] = sep[j++];
		i++;
	}
	strcopy[str] = '\0';
	return (strcopy);
}






