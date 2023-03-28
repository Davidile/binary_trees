#include "binary_trees.h"

/**
 * binary_tree_height - a function that measures the height of a binary tree.
 * @tree: pointer to node of tree to measure
 *
 * Return: height of tree or 0 if NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
size_t left, right;

if (tree == NULL)
	return (0);

if (tree->left == NULL && tree->right == NULL)
	return (0);

left = binary_tree_height(tree->left) + 1;
right = binary_tree_height(tree->right) + 1;

if (left > right)
	return (left);
else
	return (right);
}
