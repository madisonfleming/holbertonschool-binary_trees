#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * binary_tree_sibling - find sibling of node
 * @node: pointer to node to find sibling
 * Return: pointer to sibling node otherwise null
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);

	if (node->parent->left == node && node->parent->right != NULL)
		return (node->parent->right);

	if (node->parent->right == node && node->parent->left != NULL)
		return (node->parent->left);

	return (NULL);
}
