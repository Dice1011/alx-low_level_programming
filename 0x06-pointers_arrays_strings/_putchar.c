#include <unistd.h>

Int _putchar(char c)
{
	return (write(1, &c, 1));
}
