#include "binary_trees.h"
/**
 * binary_tree_is_full - comprueba si un árbol binario está lleno
 * @tree: arbol
 * Return: si esta lleno 1 si no 0
*/
int binary_tree_is_full(const binary_tree_t *tree)
{
	int lef = 0;
	int rig = 0;

	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
		return (1);

	lef = binary_tree_is_full(tree->left);
	rig = binary_tree_is_full(tree->right);

	if (lef && rig)
		return (1);

	return (0);
}
