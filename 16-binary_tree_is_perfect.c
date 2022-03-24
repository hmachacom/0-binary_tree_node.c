#include "binary_trees.h"
/**
 * binary_tree_is_perfect - ::::::::::::
 * @tree: raiz
 * Return: 0 or 1
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	return ((binary_tree_balance(tree) == 0 && binary_tree_is_full(tree) == 1) ? 1 : 0);
}
/**
 * binary_tree_balance - :::::::::::::
 * @tree: raiz
 * Return: 0 or 1
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree)
		return (adicional(tree->left) - adicional(tree->right));
	return (0);
}
/**
 * adicional - Mide la altura de un árbol binario.
 * @tree: raiz.
 * Return: valor de la altura del arbol.
 */
size_t adicional(const binary_tree_t *tree)
{
	if (tree != NULL)
	{
		size_t lef = 0, rig = 0;

		if (tree->left)
			lef = adicional(tree->left) + 1;
		else
			lef = 1;
		if (tree->right)
			rig = adicional(tree->right) + 1;
		else
			rig = 1;
		return ((lef > rig) ? lef : rig);
	}
	return (0);
}
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