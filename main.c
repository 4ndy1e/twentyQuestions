#include <stdio.h>
#include <stdlib.h>
#include "bst.h"

void playGame(node* root) {
  if(root->left==NULL && root->right == NULL)
}

int main() {
  node* game_tree = create_game_tree();

  // if (game_tree != NULL) {
  //   printf("%d\n", game_tree->data);
  //   printf("%s\n", game_tree->question);
  // } else {
  //   printf("Failed to create game tree\n");
  // }

  char choice;
  printf("Welcome! Press 'q' to quit or any other key to continue:\n");
  scanf("%c", &choice);


  while(choice != 'q') {
    playGame(game_tree);
  }
}