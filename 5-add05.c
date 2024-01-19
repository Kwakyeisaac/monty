#include "monty.h"
/**
 * f_add - it adds the top two elements of the stack.
 * @head: the stack head
 * @counter: the line_number
 * Return: no return
 */
void f_add(stack_t **head, unsigned int counter)
{
	stack_t *v;
	int len = 0, aux;

	v = *head;
	while (v)
	{
		v = v->next;
		len++;
	}
	if (len < 2)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	v = *head;
	aux = v->n + v->next->n;
	v->next->n = aux;
	*head = v->next;
	free(v);
}
