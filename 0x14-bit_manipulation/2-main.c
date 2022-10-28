#include <stdio.h>
#include "main.h"
#include "limits.h"

/**
   * main - check the code
    *
     * Return: Always 0.
      */
int main(void)
{
	    int n;

	        n = get_bit(1024, 10);
		    printf("%d\n", n);
		        n = get_bit(ULONG_MAX, 19);
			    printf("%d\n", n);
			        n = get_bit(2048, 20);
				    printf("%d\n", n);
				    printf("%lu\n", ULONG_MAX);
				        return (0);
}
