int	ft_isalnum(int c)
{
	if (((char)c >= 'a' && (char)c <= 'z') || ((char)c >= '0' && (char)c <= '9'))
	{
		return (c);
	}
	return (0);
}
