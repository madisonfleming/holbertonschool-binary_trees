#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * binary_tree_leaves - count the leaves
 * @tree: pointer to the tree to count
 * Return: number of leaves of 0 if tree is null
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t count;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	count = binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right);

return (count);
}
