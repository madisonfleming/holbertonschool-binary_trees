#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * binary_tree_insert_left - insert a node as a left child
 * @parent: pointer to the parent of the inserted node
 * @value: value to put in node
 * Return: pointer to new node or null if fail
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = value;

	if (parent->left != NULL)
	{
		new_node->right = parent->right;
		new_node->parent = parent;
		new_node->left = NULL;
		parent->right->parent = new_node;
	}
	else
	{
		new_node->parent = parent;
		new_node->left = NULL;
		new_node->right = NULL;
	}
	parent->right = new_node;
return (new_node);
}
