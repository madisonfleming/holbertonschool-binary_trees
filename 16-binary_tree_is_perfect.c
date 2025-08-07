#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * depth - find the depth of the tree
 * @tree: pointer to tree
 * Return: depth
 */
int depth(const binary_tree_t *tree)
{
	int left;
	int right;

	if (tree == NULL)
		return (0);

	left = depth(tree->right);
	right = depth(tree->left);

return (1 + (left > right ? left : right));
}

/**
 * is_perfect - traverse the tree using recursion
 * @tree: pointer to tree
 * @d: depth of tree
 * Return: value if perfect
 */
int is_perfect(const binary_tree_t *tree, int d)
{
	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (d == 1);

	if (tree->left == NULL || tree->right == NULL)
	return (0);

return (is_perfect(tree->left, d - 1) && is_perfect(tree->right, d - 1));
}

/**
 * binary_tree_is_perfect - check if tree is perfect
 * @tree: pointer to tree
 * Return: 1 if perfect otherwise 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int d = depth(tree);

return (is_perfect(tree, d));
}
