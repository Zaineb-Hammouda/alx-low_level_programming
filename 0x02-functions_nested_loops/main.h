/**
 * _putchar - writes the character c to stdout
 * prints alphabet in lowercase
 * print_alphabet_x10 prints 10 times the alphabet in lc
 * _islower - checks for lowercase char
 * _isalpha - checks for alphabetic char
 * print_sign - prints sign of num
 * _abs - computes absolute value of int
 * print_last_digit - prints the last digit of a number
 * jack_bauer - prints every minute of the day
 * times_table - prints the 9 times table starting with 0
 * add - adds two integers and returns the result
 * print_to_98 - print all natural numbers from n to 98
 */

#ifndef main_h
#define main_h
extern int _putchar(char c);
extern void print_alphabet(void);
extern void print_alphabet_x10(void);
extern int _islower(int c);
extern int _isalpha(int c);
extern int print_sign(int n);
extern int _abs(int);
extern int print_last_digit(int);
extern void jack_bauer(void);
extern void times_table(void);
extern int add(int, int);
extern void print_to_98(int n);

#endif
