int	ft_isprint(int c)
{
	if ((char)c >= ' ' && (char)c <= '~')
	{
		return (c);
	}
	return (0);
}
