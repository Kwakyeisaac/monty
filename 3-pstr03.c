#include "monty.h"
/**
 * f_pstr - it prints the string starting at the top of the stack,
 * followed by a new line
 * @head: the stack head
 * @counter: the line_number
 * Return: no return
 */
void f_pstr(stack_t **head, unsigned int counter)
{
	stack_t *v;
	(void)counter;

	v = *head;
	while (v)
	{
		if (v->n > 127 || v->n <= 0)
		{
			break;
		}
		printf("%c", v->n);
		v = v->next;
	}
	printf("\n");
}
