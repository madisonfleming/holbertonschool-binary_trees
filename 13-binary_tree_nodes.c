#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * binary_tree_nodes - count the nodes with at least one child
 * @tree: pointer to root node of tree
 * Return: number of node or 0 if tree is null
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t count;

	if (tree == NULL)
		return (0);

	count = binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right);

	if (tree->left != NULL || tree->right != NULL)
		count++;

	return (count);
}
