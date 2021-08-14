#include <stdlib.h>
#include <stdio.h>

typedef struct node
{
	char *key;
	void *data;
	struct node *left;
	struct node *right;
} node_t;

node_t *allocnode()
{
	node_t *node = (node_t *) malloc(sizeof(node_t));
	return node;
}

node_t *insert(node_t *root, char *key, void *data)
{
	if (root == NULL)
	{
		node_t *node = allocnode();
		node->key = key;
		node->data = data;
		node->left = node->right = NULL;
		return node;
	}
	else
	{
		if (root->data > data)
		{
			root->left = insert(root->left, key, data);
		}
		else
		{
			root->right = insert(root->right, key, data);
		}
		return root;
	}
}

void print_node(node_t *node)
{
	if (node) printf("'%s':'%s'\n", node->key, (char*)(node->data));
}

void visit_tree(node_t *node, void (*fp)(node_t *root))
{
	if (node)
	{
		visit_tree(node->left, fp);
		visit_tree(node->right, fp);
		fp(node);
	}
}

void destroy_tree(node_t *node, void (*fdestroy)(node_t *root))
{
	if (node)
	{
		destroy_tree(node->left, fdestroy);
		destroy_tree(node->right, fdestroy);
		fdestroy(node);
		free(node);
	}
}
