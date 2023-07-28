#include "header.h"

int main(int ac, char **av, char **env)
{

	(void) av;
	if(ac == 1)
	{
		print_prompt(env);
	}
	return 0;
}
