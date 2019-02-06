// Count number of element in char **
// No NULL needed at the end

#include <stdio.h>

#define COUNT_OF(ptr) (sizeof(ptr) / sizeof((ptr)[0]))

struct hello
{
	char *str;
	int a;
	int b;
}				hello;

int main()
{
	static const char *strings[] = {
		"hello",
		"hello",
		"world"
	};

	for (size_t i = 0; i < COUNT_OF(strings); i++) {
		printf("Value is = %s\n", strings[i]);
		printf("%d\n", sizeof(strings));
		printf("%d\n", sizeof(strings[0]));
	}
}
