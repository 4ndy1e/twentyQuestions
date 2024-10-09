#include <stdio.h>
#include <stdlib.h>
#include "bst.h"

void playGame(node* root) {
  char choice;

  // check if guess is available
  if(root->left==NULL && root->right == NULL) {
    printf("%s\n", root->guess);
    printf("y/n: ");
    scanf(" %c", &choice);

    if(choice == 'y') {
      printf("I win!\n");
      return;
    }
    printf("You Win!\n");
    return;
  }

  // prompt question
  printf("%s\n", root->question);
  printf("y/n: ");
  scanf(" %c", &choice);

  if(choice == 'y') {
    playGame(root->left);
  }
  else {
    playGame(root->right);
  }
}

int main() {
  node* game_tree = create_game_tree();
  
  // begin game
  char choice;
  printf("Welcome! Press 'q' to quit or any other key to continue:\n");
  scanf("%c", &choice);

  // play game
  while(choice != 'q') {
    printf("You think of a fruit or vegetable and I will try to guess it!\n");
    playGame(game_tree);
    printf("Press 'q' to quit or any other key to continue: ");
    scanf(" %c", &choice);
  }

  printf("Bye Bye !");
}