#include <stdlib.h>
#include <stdio.h>

typedef struct node 
{
	void* data;
	struct node *next;
} node_t;

node_t *list_create(void *data)
{
	node_t *head = malloc(sizeof(node_t));
	head->data = data;
	head->next = NULL;
	return head;
}

void list_destroy(node_t **head, void (*fp)(void *data))
{
	if (*head)
	{
		node_t *current = *head;
		node_t *next;

		while (current)
		{
			next = current->next;
			if (current->data) fp(current->data);
			free(current);
			current = next;
		}
		*head = NULL;
	}
}

void list_push(node_t *head, void *data)
{
	node_t *new = malloc(sizeof(node_t));
	new->data = data;
	new->next = NULL;

	if (head == NULL) head = new;
	else
	{
		node_t *prev = head;
		while(prev->next != NULL) prev = prev->next;
		prev->next = new;
	}
}

void list_unshift(node_t **head, void *data)
{
	if (*head)
	{
		node_t *new = malloc(sizeof(node_t));
		new->data = data;
		new->next = *head;
		*head = new;
	}
}

void *list_pop(node_t **head)
{
	node_t *current = *head;
	node_t *prev;
	
	if (current) 
	{
    	while (current->next != NULL)
    	{
    	    prev = current;
    	    current = current->next;
    	}
    	
    	void *data = current->data;
    	free(current);
    	prev->next = NULL;
    	
    	return data;
	}
	return NULL;
}

void *list_shift(node_t **head)
{
	node_t *current = *head;
	if (current) 
	{
		void *data = current->data;
		*head = current->next;
		free(current);
		return data;
	}
	return NULL;
}

void *list_remove(node_t **head, int pos)
{
	node_t *current = *head;
	node_t *prev;
	
	if (current)
	{
    		for (int i = 0; current && i < pos - 1; i++)
		{
			prev = current;
			current = current->next;
		}

		void *data = current->data;

		if (prev == NULL) *head = current->next;
		else prev->next = current->next;

		free(current);
		return data;
	}
	return NULL;
}

void list_print(node_t *head)
{
	node_t *current = head;
	while (current)
	{
		printf(current->data);
		current = current->next;
	}
}

void list_visitor(node_t *head, void (*fp)(void *data))
{
	node_t *current = head;
	while (current)
	{
		fp(current->data);
		current = current->next;
	}
}
