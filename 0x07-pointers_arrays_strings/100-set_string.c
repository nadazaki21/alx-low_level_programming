/**
 * set_string - making a ponter point to another string
 * thorugh a pointer to a pointer
 * @s: pointer to pointer, the one we want to change
 * @to: pointer to string we want to switch to
*/
void set_string(char **s, char *to)
{
	*s = to ; 
}

