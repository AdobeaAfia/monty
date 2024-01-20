#include "monty.h"

int short_stack_error(unsigned int line_number, char *op);
int div_error(unsigned int line_number);
int pop_error(unsigned int line_number);
int pchar_error(unsigned int line_number, char *message);
int pint_error(unsigned int line_number);

/*
 * pop_error - Prints pop error messages for empty stacks
 * @line_number: Line number in script where error occured
 *
 * Return: Always (EXIT_SUCCESS)
 */

int pop_error(unsigned int line_number)
{
	fprintf(stderr, "L%u: cannot pop an empty stack\n", line_number);
	return (EXIT_SUCCESS);
}

/**
 * pint_error - Prints pint error messages for empty stacks.
 * @line_number: Line number in script where error occured
 *
 * Return: Always (EXIT_SUCCESS)
 */

int pint_error(unsigned int line_number)
{
	fprintf(stderr, "L%d: cannot pint an empty stack\n", line_number);
	return (EXIT_SUCCESS);
}

/**
 * short_stack_error - Prints monty math function error messages
 * @line_number: Line number in script where error occured
 * @op: operation where the error occured
 *
 * Return: Always (EXIT_SUCCESS)
 */

int short_stack_error(unsigned int line_number, char *op)
{
	fprintf(stderr, "L%u: cannot %s, stack is short\n", line_number, op);
	return (EXIT_SUCCESS);
}

/**
 * div_error - Prints division error messages for division by 0
 * @line_number: Line number in script where error occured
 *
 * Return: Always (EXIT_SUCCESS)
 */

int div_error(unsigned int line_number)
{
	fprintf(stderr, "L%u: cannot %s, divide by zero\n", line_number);
	return (EXIT_SUCCESS);
}

/**
 * pchar_error - Prints pchar error messages for empty stacks
 * @line_number: Line number in script where error occured
 * @message: The corresponding error message to print
 *
 * Return: Always (EXIT_SUCCESS)
 */

int pchar_error(unsigned int line_number, char *message)
{
	fprintf(stderr, "L%u: cannot pchar, %s\n", line_number, message);
	return (EXIT_SUCCESS);
}
