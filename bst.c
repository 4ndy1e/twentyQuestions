#include <stdio.h>
#include <stdlib.h>
#include "bst.h"

node* create_game_tree() {
  struct node* root = NULL;

  root = insert(root, 100, "Does it grow underground?", "");
  insert(root, 50, "Is it long in shape?", "");
  insert(root, 25, "Is it orange in color?", "");
  insert(root, 15, "", "It's a carrot!");
  insert(root, 35, "", "It's a parsnip!");
  insert(root, 75, "Is it red in color?", "");
  insert(root, 65, "", "It's a radish!");
  insert(root, 85, "", "It's a potato!");
  insert(root, 150, "Does it grow on a tree?", "");
  insert(root, 125, "Is it red in color?", "");
  insert(root, 115, "", "It's an apple!");
  insert(root, 135, "", "It's a peach!");
  insert(root, 175, "Is it red in color?", "");
  insert(root, 165, "", "It's a tomato!");
  insert(root, 185, "", "It's a pea!");

  return root;
}

node* insert(node* root, int data, char* question, char* guess) {
  // if root is null, then set root to insert value
  // check if data is less than or greater than root
  if(root == NULL) {
    // allocate memory for node and set up data
    root = malloc(sizeof(node));
    root->data = data;
    root->question = question;
    root->guess = guess;
    root->left = NULL;
    root->right = NULL;
    return root;
  }
  else if(data < root->data) {
    return insert(root->left, data, question, guess);
  }
  else {
    return insert(root->right, data, question, guess);
  }
}