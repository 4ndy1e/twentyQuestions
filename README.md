# Twenty Questions Game

Twenty Questions is a classic parlor game where one person thinks of something, and others guess what it is by asking a series of questions that can only be answered with a ‘Yes’ or ‘No’. This game has been enjoyed since the 19th century and was a popular radio and television game show in the 20th century.

This project implements the Twenty Questions Game in C, where a player tries to guess an object that the program thinks of by asking up to 20 yes-or-no questions. The game promotes deductive reasoning and has practical applications in computer science and information theory.

The concept is similar to the video game Akinator, which uses artificial intelligence to guess the answer by refining questions based on past user interactions.

# Features
- Interactive console-based game
- The program "thinks" of an object, and the player has to guess it by asking yes-or-no questions
- Players can make up to 20 guesses
- Simple command-line interface using standard input and output
- The game demonstrates the use of binary decision trees for efficient guessing

# How it works
1. The program starts by thinking of an object.
2. The player asks up to 20 yes-or-no questions to deduce the object.
3. The game continues until the player correctly guesses the object or runs out of questions.
4. The player can start a new game after each round.

# How to play
**1. Clone this repository**
  ```
  git clone https://github.com/your-username/twenty-questions-game.git
  ```

**2. Navigate to project directory**
  ```
  cd twenty-questions-game
  ```

**3. Compile the program**
 ```
 gcc -o twenty_questions twenty_questions.c
 ```

**4. Run the game**
```
./twenty_questions
```

**5. Follow the prompts to ask questions and try to guess what the program is thinking of. Enjoy!**
