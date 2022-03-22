![](https://images.fineartamerica.com/images/artworkimages/mediumlarge/3/binary-tree-shirtom.jpg)

# 0x1D. C - Binary trees

------------

## General

- What is a binary tree
- What is the difference between a binary tree and a Binary Search Tree
- What is the possible gain in terms of time complexity compared to linked lists
- What are the depth, the height, the size of a binary tree
- What are the different traversal methods to go through a binary tree
- What is a complete, a full, a perfect, a balanced binary tree

------------

## Data Structure and Functions

Please use the following data structures and types for binary trees. Don’t forget to include them in your header file.

### Basic Binary Tree

```
/**
 * struct binary_tree_s - Binary tree node
 *
 * @n: Integer stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node
 */
struct binary_tree_s
{
    int n;
    struct binary_tree_s *parent;
    struct binary_tree_s *left;
    struct binary_tree_s *right;
};

typedef struct binary_tree_s binary_tree_t;
```
### Binary Search Tree
```
typedef struct binary_tree_s bst_t;
```
### AVL Tree
```
typedef struct binary_tree_s avl_t;
```
### Max Binary Heap
```
typedef struct binary_tree_s heap_t;
```
------------

## Binary trees

In computer science, a binary tree is a data structure in which each node can have a left child and a right child. They cannot have more than two children. If any child has a reference to null, i.e. it does not store any data, then it is called an external node.

![](https://res.cloudinary.com/practicaldev/image/fetch/s--od-naD9n--/c_limit%2Cf_auto%2Cfl_progressive%2Cq_auto%2Cw_880/https://miro.medium.com/max/975/1%2APWJiwTxRdQy8A_Y0hAv5Eg.png)

## List of poinst.

|  Point | What is done at this point? | level |
| ------------ | ------------ | ------------ |
| 0-binary_tree_node.c | Write a function that creates a binary tree node | Mandatory |
| 1-binary_tree_insert_left.c | Write a function that inserts a node as the left-child of another node | Mandatory |
| 2-binary_tree_insert_right.c | Write a function that inserts a node as the right-child of another node | Mandatory |
| 3-binary_tree_delete.c | Write a function that deletes an entire binary tree | Mandatory |
| 4-binary_tree_is_leaf.c | Write a function that checks if a node is a leaf | Mandatory |
| 5-binary_tree_is_root.c | Write a function that checks if a given node is a root | Mandatory |
| 6-binary_tree_preorder.c | Write a function that goes through a binary tree using pre-order traversal | Mandatory |
| 7-binary_tree_inorder.c | Write a function that goes through a binary tree using in-order traversal | Mandatory |
| 8-binary_tree_postorder.c | Write a function that goes through a binary tree using post-order traversal | Mandatory |
| 9-binary_tree_height.c | Write a function that measures the height of a binary tree | Mandatory |
| 10-binary_tree_depth.c | Write a function that measures the depth of a node in a binary tree | Mandatory |
| 11-binary_tree_size.c | Write a function that measures the size of a binary tree | Mandatory |
| 12-binary_tree_leaves.c | Write a function that counts the leaves in a binary tree | Mandatory |
| 13-binary_tree_nodes.c | Write a function that counts the nodes with at least 1 child in a binary tree | Mandatory |
| 14-binary_tree_balance.c | Write a function that measures the balance factor of a binary tree | Mandatory |
| 15-binary_tree_is_full.c | Write a function that checks if a binary tree is full | Mandatory |
| 16-binary_tree_is_perfect.c | Write a function that checks if a binary tree is perfect | Mandatory |
| 17-binary_tree_sibling.c | Write a function that finds the sibling of a node | Mandatory |
| 18-binary_tree_uncle.c | Write a function that finds the uncle of a node| Mandatory |

------------

# Documentation:
### Links:

- https://en.wikipedia.org/wiki/Binary_tree
- https://www.tutorialspoint.com/data_structures_algorithms/tree_data_structure.htm
- https://www.tutorialspoint.com/data_structures_algorithms/tree_traversal.htm
- https://en.wikipedia.org/wiki/Binary_search_tree
- https://www.youtube.com/watch?v=H5JubkIy_p8

------------

# Author

## Hugo Machacon:
- Git: https://github.com/hmachacom
- Twitter: https://twitter.com/hmachacom
- Linkedin: https://www.linkedin.com/in/hugo-machacon-5262711bb/

## Juan Sebastian Avendaño Gonzalez:
- Git: https://github.com/AvendanoisPepe
- Twitter: https://twitter.com/Sebastian_Aven
- Linkedin: https://www.linkedin.com/in/juan-sebastian-avenda%C3%B1o-gonz%C3%A1lez-8b1185200/

------------

![](https://i.imgur.com/WaghKCr.jpg)