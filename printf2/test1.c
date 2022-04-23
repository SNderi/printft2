#include "main.h"

/**
 * main - Test 1 for character
 *
 */

int main(void)
{
	int a,b;

	/* Print character test*/

	_printf("%c", 'w');
	_putchar('\n');
	printf("%c\n", 'w');
	a = _printf("%c", 'w');
	printf("%d\n", a);
	b = printf("%c", 'w');
	printf("%d\n", b);

	/*Print string test*/

	_printf("%s", "qwerty");
	_putchar('\n');
	printf("%s\n", "qwerty");
	printf("%d\n", _printf("%s", "qwerty"));
	printf("%d\n", printf("%s", "qwerty"));

	/*Print percent test*/

	_printf("%%, %%");
	_putchar('\n');
	printf("%%, %%\n");
	printf("%d\n", _printf("%%, %%"));
	printf("%d\n", printf("%%, %%"));

	/*Print integer test*/

	_printf("This is %d", 54321);
	_putchar('\n');
	_printf("This is %d", -54321);
	_putchar('\n');
	printf("This is %d\n", -54321);
	printf("This is %d\n", 54321);
	printf("[%d]\n", _printf("%d", 54321));
	printf("[%d]\n", printf("%d", 54321));

	/*Test for unknown datatype format*/

	_printf("Unknown %r\n");
	printf("Unknown %r\n");
	printf("[%d]\n", _printf("Unknown %r"));
	printf("[%d]\n", printf("Unknown %r"));

	/*Test for binary conversion*/
	_printf("%b\n", 98);
	_printf("[%d]\n", _printf("%b", 98));

	return (0);
}
