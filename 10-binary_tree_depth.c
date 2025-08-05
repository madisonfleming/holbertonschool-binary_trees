#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * binary_tree_depth - measure the depth of a node in a tree
 * @tree: pointer to the tree
 * Return: depth of tree
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t level = 0;

	if (tree == NULL)
		return (0);

	while (tree->parent != NULL)
	{
		level++;
		tree = tree->parent;
	}
	return (level);
}
