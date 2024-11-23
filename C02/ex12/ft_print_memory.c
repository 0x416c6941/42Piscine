#include <unistd.h>
#include <stdint.h>

/**
 * Print byte in hex to stdout.
 * @warning	Ugly code to bypass Norminette :(
 * @param	c	Character to print in hex.
 */
void	ft_print_byte_in_hex(unsigned char c)
{
	unsigned char	to_print;

	to_print = (c / 0x10) % 0x10;
	if (to_print < 0xa)
		to_print += '0';
	else
		to_print = (to_print - 0xa) + 'a';
	write(STDOUT_FILENO, &to_print, 1);
	to_print = c % 0x10;
	if (to_print < 0xa)
		to_print += '0';
	else
		to_print = (to_print - 0xa) + 'a';
	write(STDOUT_FILENO, &to_print, 1);
}

#define TO_BITS	8

/**
 * Prints address held in addr (without "0x" prefix).
 * Should work on both 32-bit and 64-bit systems.
 * @param	addr	Some address to print in hex.
 */
void	ft_print_addr(uintptr_t addr)
{
	size_t	i;

	i = 1;
	while (i <= sizeof(addr))
		ft_print_byte_in_hex((addr >> ((sizeof(addr) - i++)
					* TO_BITS)) & 0b11111111);
}

#undef TO_BITS

#define HEX_PLACEHOLDER		"  "
#define HEX_PLACEHOLDER_LEN	2

void	ft_print_hex_nums(unsigned char *addr, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (i < 0x10)
	{
		if (i < size)
			ft_print_byte_in_hex(*(addr + i));
		else
			write(STDOUT_FILENO, HEX_PLACEHOLDER, HEX_PLACEHOLDER_LEN);
		if (i && (i % 2) && i < 0xf)
			write(STDOUT_FILENO, " ", 1);
		i++;
	}
}

#undef HEX_PLACEHOLDER_LEN
#undef HEX_PLACEHOLDER

#define ASCII_PRINTABLE_LOWER	32
#define ASCII_PRINTABLE_UPPER	126

void	ft_print_chars(unsigned char *addr, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (i < 0x10 && i < size)
	{
		if (*addr >= ASCII_PRINTABLE_LOWER && *addr <= ASCII_PRINTABLE_UPPER)
			write(STDOUT_FILENO, addr, 1);
		else
			write(STDOUT_FILENO, ".", 1);
		addr++;
		i++;
	}
}

#undef ASCII_PRINTABLE_UPPER
#undef ASCII_PRINTABLE_LOWER

#define ADDR_SEP		": "
#define ADDR_SEP_LEN	2

/**
 * I'm not sure if we should return the original location of addr or not,
 * but Moulinette was fine with the return value from this solution.
 */
void	*ft_print_memory(void *addr, unsigned int size)
{
	if (!size)
		return (addr);
	while (size)
	{
		ft_print_addr((uintptr_t) addr);
		write(STDOUT_FILENO, ADDR_SEP, ADDR_SEP_LEN);
		ft_print_hex_nums(addr, size);
		write(STDOUT_FILENO, " ", 1);
		ft_print_chars(addr, size);
		write(STDOUT_FILENO, "\n", 1);
		if (size < 0x10)
			size = 0;
		else
			size -= 0x10;
		addr += 0x10;
	}
	return (addr);
}

#undef ADDR_SEP_LEN
#undef ADDR_SEP

/*
#define TEST_MSG 	"Hello there! I have no idea if this works or not."
#define TEST_MSG_LEN	101

int	main(void)
{
	(void) ft_print_memory(TEST_MSG, TEST_MSG_LEN);
	return (0);
}

#undef TEST_MSG_LEN
#undef TEST_MSG
 */
