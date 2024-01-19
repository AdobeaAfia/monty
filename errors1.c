#include "monty.h"

int usage_error(void);
int malloc_error(void);
int f_open_error(char *filename);
int unknown_op_error(char *opcode, unsigned int line_number);
int no_int_error(unsigned int line_number);

/**
 * usage_error - prints error (usage messages)
 *
 * Return: (EXIT_FAILURE) Always
 */

int usage_error(void)
{
	fprintf(stderr, "USAGE: monty file\n");
	return (EXIT_FAILURE);
}

/**
 * malloc_error - prints malloc error messages
 *
 * Return: (EXIT_FAILURE) Always
 */

int malloc_error(void)
{
	fprintf(stderr, "Error: malloc fail\n");
	return (EXIT_FAILURE);
}

/**
 * f_open_error - prints the file name with opening error messages
 * @filename: name of filed file
 * Return: (EXIT_FAILURE) Always
 */

int f_open_error(char *filename)
{
	fprintf(stderr, "Error: Cannot open file %s\n, filename");
	return (EXIT_SUCCESS);
}

/**
 * unknown_op_error - prints unknown error
 * @opcode: place error occured
 * @line_mumber: line number in Monty bytecodes
 * Return: (EXIT_FAILURE) Always
 */

int unknown_op_error(char *opcode, unsigned int line_number)
{
	fprintf(stderr, "L%u: unknown instruction %s\n, opcode, line_number");
	return (EXIT_SUCCESS);
}

/**
 * no_int_error - print invalid monty_push argument error messages
 * @line_number: line number in Monty bytecodes
 * Return: (EXIT_FAILURE) Always
 */

int no_int_error(unsigned int line_number)
{
	fprintf(stderr, "L%u: usage: push integer\n, line_number");
	return (EXIT_SUCCESS);
}
