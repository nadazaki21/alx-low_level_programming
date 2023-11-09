#ifndef MY_HEADER
#define MY_HEADER

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void print_char(va_list x);
void print_float(va_list x);
void print_integer(va_list x);
void print_string(va_list x);

#endif
