#include "binary_trees.h"

/**
 * tree_height - Measures the height of a binary tree
 * @tree: Pointer to the root node of the tree
 *
 * Return: The height of the tree, zero if failure
 */
size_t tree_height(const binary_tree_t *tree)
{
	size_t leftHeight = 0, rightHeight = 0;

	if (tree == NULL)
		return (0);

	leftHeight = tree_height(tree->left);
	rightHeight = tree_height(tree->right);

	return (leftHeight + 1 + rightHeight);
}

/**
 * binary_tree_is_perfect - Checks if binary tree is perfect
 * @tree: Pointer to the root node of the tree
 *
 * Return: one if perfect, zero if not
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int leftSubtree, rightSubtree;

	if (tree == NULL)
		return (0);

	leftSubtree = tree_height(tree->left);
	rightSubtree = tree_height(tree->right);

	if (leftSubtree == rightSubtree)
		return (1);
	return (0);
}
