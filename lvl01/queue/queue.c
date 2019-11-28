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

void *dequeue(struct s_queue *queue);

void *peek(struct s_queue *queue);

int isEmpty(struct s_queue *queue);