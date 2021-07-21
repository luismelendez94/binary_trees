#include "binary_trees.h"

/**
 * binary_tree_node - Create a binary tree node
 * @parent: Pointer to the parent node of the node to create
 * @value: Value to put in the new node
 *
 * Return: Pointer to a new node, NULL on failure
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *tempNode;

	tempNode = malloc(sizeof(binary_tree_t));
	if (tempNode == NULL)
		return (NULL);

	tempNode->n = value;
	tempNode->left = NULL;
	tempNode->right = NULL;
	tempNode->parent = parent;

	return (tempNode);
}
