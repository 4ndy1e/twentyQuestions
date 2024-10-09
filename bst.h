#ifndef BST_H
#define BST_H

#include <stdio.h>
#include <stdlib.h>

typedef struct node {
  int data;
  char* guess;
  char* question;
  struct node* left;
  struct node* right;
}node;

node* create_game_tree();
node* insert(node* root, int data, char* question);

#endif