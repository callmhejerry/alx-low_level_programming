#include <stdio.h>
#include <string.h>

int main()
{
	char *from;
	char to[5];

	from = "from";
	strcpy(to, from);

	printf("from - %s\n", from);
	printf("to - %s\n", to);
	
	return 0;
}
