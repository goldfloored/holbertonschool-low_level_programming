#include <stdio.h>
#include <sys/syscall.h>
#include <unistd.h>
/*
* main - func
* Description: thisisnthowitis
* Return: zeros
*/
int main(void)
{
	char quote[] = "and that piece of art is useful\"- Dora Korpar, 2015-10-19\n";

	syscall(1, STDERR_FILENO, quote, sizeof(quote) - 1);
	return (1);
}
