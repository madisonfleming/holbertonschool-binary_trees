#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * binary_tree_delete - delete a binary tree
 * @tree: pointer to tree to delete
 * Return: Success
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;

	if (tree->left != NULL)
	{
		binary_tree_delete(tree->left);
		tree->left = NULL;
	}
	if (tree->right != NULL)
	{
		binary_tree_delete(tree->right);
		tree->right = NULL;
	}
	free(tree);
}
