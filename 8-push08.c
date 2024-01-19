#include "monty.h"
/**
 * f_push - it adds node to the stack
 * @head: the stack head
 * @counter: the line_number
 * Return: no return
 */
void f_push(stack_t **head, unsigned int counter)
{
	int v, w = 0, flag = 0;

	if (bus.arg)
	{
		if (bus.arg[0] == '-')
			w++;
		for (; bus.arg[w] != '\0'; w++)
		{
			if (bus.arg[w] > 57 || bus.arg[w] < 48)
				flag = 1; }
		if (flag == 1)
		{ fprintf(stderr, "L%d: usage: push integer\n", counter);
			fclose(bus.file);
			free(bus.content);
			free_stack(*head);
			exit(EXIT_FAILURE); }}
	else
	{ fprintf(stderr, "L%d: usage: push integer\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE); }
	v = atoi(bus.arg);
	if (bus.lifi == 0)
		addnode(head, v);
	else
		addqueue(head, v);
}
