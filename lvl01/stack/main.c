#include <stdio.h>

void print_stack(struct s_stack *stack)
{
	struct s_node *temp;
	int i;

	i = 1;

	if (stack->top == NULL)
		printf("Stack is empty\n");
	else
	{
		temp = stack->top;
		while(temp)
		{
			printf("%d. %s\n", i, (char *)temp->content);
			temp = temp->next;
			i++;
		}
	}
}

int main(void)
{
	struct s_stack *stack;

	stack = init();
	push(stack, (void *)"abc");
	push(stack, (void *)"bcd");
	push(stack, (void *)"cde");
	printf("Stack:\n");
	print_stack(stack);
	printf("Stack top is: %s\n", (char *)peek(stack));
	printf("Deleted node: %s\n", (char *)pop(stack));
	printf("Stack:\n");
	print_stack(stack);
	printf("Stack top is: %s\n", (char *)peek(stack));
	if(isEmpty(stak))
		printf("Stack is Empty\n");
	else
		printf("Stack is Not Empty\n");
	return (0);
}
