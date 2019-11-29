#include <stdlib.h>

struct s_node {
	void *content;
	struct s_node *next;
};

struct s_queue {
	struct s_node *first;
	struct s_node *last;
};

struct s_queue *init(void)
{
	struct s_queue *queue;
	queue = (struct s_queue *)malloc(sizeof(struct s_queue));
	queue->first = NULL;
	queue->last = NULL;
	return(queue);
}

void enqueue(struct s_queue *queue, void *content)
{
	struct s_node *current;

	if (!queue)
		return ;
	current = (struct s_node *)malloc(sizeof(struct s_node));
	current->content = content;
	current->next = NULL;
	if(!queue->first)
		queue->first = current;
	else
		queue->last->next = current;
	queue->last = current;
}

void *dequeue(struct s_queue *queue)
{
	void *content;
	struct s_node *temp;
	if(!queue || !queue->first)
		return (NULL);
	content = queue->first->content;
	temp = queue->first;
	queue->first = temp->next;
	free(temp);
	return (content);
}

void *peek(struct s_queue *queue)
{
	if(!queue || !queue->first)
		return (NULL);
	return (queue->first->content);
}

int isEmpty(struct s_queue *queue)
{
	if(!queue || !queue->first)
		return (1);
	return (0);
}

#include <stdio.h>

void	print_queue(struct s_queue *queue)//DELETE
{
	struct s_node *temp;
	int				i;

	i = 1;
	if (queue->first == NULL)
		printf("Queue is empty\n");
	else
	{
		temp = queue->first;
		while (temp)
		{
			printf("%d. %s\n", i, (char *)temp->content);
			temp = temp->next;
			i++;
		}
	}
}

int		main(void)//DELETE
{
	struct s_queue *queue;

	queue = init();
	enqueue(queue, (void *)"abc");
	enqueue(queue, (void *)"bcd");
	enqueue(queue, (void *)"cde");
	printf("Stack:\n");
	print_queue(queue);
	printf("Top of stack: %s\n", (char *)peek(queue));
	printf("Deleted node: %s\n", (char *)dequeue(queue));
	printf("Stack:\n");
	print_queue(queue);
	printf("Top of stack: %s\n", (char *)peek(queue));
	if (isEmpty(queue))
		printf("Stack is empty\n");
	else
		printf("Stack is not empty\n");
	return (0);
}