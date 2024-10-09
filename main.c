#include <stdio.h>
#include <stdlib.h>
#include "bst.h"

void playGame(node* root) {
  printf("%s\n", root->question);

  char choice;
  printf("y/n: ");
  scanf(" %c", &choice);

  if(root->left==NULL && root->right == NULL) {
    printf("%s\n", root->guess);
  }
  else if(choice == 'y') {
    playGame(root->left);
  }
  else {
    playGame(root->right);
  }
}

int main() {
  node* game_tree = create_game_tree();

  // if (game_tree != NULL) {
  //   printf("%d\n", game_tree->left->data);
  //   printf("%s\n", game_tree->left->question);
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