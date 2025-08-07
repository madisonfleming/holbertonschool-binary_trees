#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * binary_tree_is_full - check if a tree is full
 * @tree: pointer to root node of tree to check
 * Return: 1 if full, 0 otherwise
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (1);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	if ((tree->left) && (tree->right))
		return (binary_tree_is_full(tree->left) &&
				binary_tree_is_full(tree->right));

return (0);
}
