#include "binary_trees.h"
/**
 * binary_tree_nodes - Cuenta todos los nodos de un hijo
 * @tree: arbol
 * Return: la suma total
*/
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (tree->right || tree->left)
		return (binary_tree_nodes(tree->left) + 1 + binary_tree_nodes(tree->right));
	else
		return (0);
}
