#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * binary_tree_preorder - traverse a binary tree using preorder
 * @tree: pointer to the root node of the tree
 * @func: pointer to the function to call for each node
 * Return: Success
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (func == NULL)
		return;

	if (tree != NULL)
	{
		func(tree->n);
		binary_tree_preorder(tree->left, func);
		binary_tree_preorder(tree->right, func);
	}
}
