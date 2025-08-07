#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * height - find the height of the tree
 * @tree: pointer to the tree
 * Return: height
 */
int height(binary_tree_t *tree)
{
	int left_height;
	int right_height;

	if (tree == NULL)
		return (0);

	left_height = height(tree->left);
	right_height = height(tree->right);

return ((left_height > right_height ? left_height : right_height) + 1);
}

/**
 * binary_tree_balance - check if the tree is balanced
 * @tree: pointer to the tree
 * Return: 1 if yes otherwise 0
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

return (height(tree->left) - height(tree->right));
}
