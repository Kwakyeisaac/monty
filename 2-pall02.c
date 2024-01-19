#include "monty.h"
/**
 * f_pall - it prints the stack
 * @head: the stack head
 * @counter: no used
 * Return: no return
 */
void f_pall(stack_t **head, unsigned int counter)
{
	stack_t *v;
	(void)counter;

	v = *head;
	if (v == NULL)
		return;
	while (v)
	{
		printf("%d\n", v->n);
		v = v->next;
	}
}
