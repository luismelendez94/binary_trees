#include "binary_trees.h"

/**
 * binary_tree_uncle - Find the uncle of a node
 * @node: Pointer to the node
 *
 * Return: A pointer to the uncle node, NULL on failure
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *parentNode;

	if (node == NULL)
		return (NULL);

	parentNode = node->parent;
	if (parentNode == NULL || parentNode->parent == NULL)
		return (NULL);

	if (parentNode->parent->left && parentNode->parent->right)
	{
		if (parentNode->parent->left == parentNode)
			return (parentNode->parent->right);
		return (parentNode->parent->left);
	}
	return (NULL);
}
