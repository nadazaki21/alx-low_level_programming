#include "lists.h"
/**
 * pre_main_function - function  to be excuted before
 * them main function
*/
void pre_main_function(void) __attribute__((constructor));
/* the attribute used here works for ggcc compilers only*/
void pre_main_function(void)
{
	printf(
	"You're beat! and yet, you must allow,\nI bore my house upon my back!\n"
	);
}
