int	ft_isascii(unsigned char c)
{
	if (c >=0 && <= 127)
		return 1;
	else
		return 0;
}