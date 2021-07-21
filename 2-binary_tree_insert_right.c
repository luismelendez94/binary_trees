#include "binary_trees.h"

/**
 * binary_tree_insert_right - Insert a node as the right-child of another
 * @parent: Pointer to the parent node of the node to create
 * @value: Value to put in the new node
 *
 * Return: Pointer to a new node, NULL on failure
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode;
	binary_tree_t *tempNode;

	if (parent == NULL)
		return (NULL);

	newNode = malloc(sizeof(binary_tree_t));
	if (newNode == NULL)
		return (NULL);

	newNode->n = value;
	newNode->left = NULL;
	newNode->right = NULL;
	newNode->parent = parent;

	if (parent->right == NULL)
		parent->right = newNode;
	else
	{
		tempNode = parent->right;
		parent->right = newNode;
		newNode->right = tempNode;
		tempNode->parent = newNode;
	}

	return (newNode);
}
