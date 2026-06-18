# 🎮 Hangman in C

A terminal-based Hangman game written in C.

## 📋 Features

- ASCII art Hangman that updates with each wrong guess
- Case-sensitive letter guessing
- Tracks correct and incorrect guesses
- Win/lose detection

## 🔧 Requirements

- GCC compiler
- Linux / macOS terminal (ANSI escape codes required)

## 🚀 How to Compile & Run
```bash
gcc -Wall -Wextra Hangman.c ascii-art.c -o hangman
./hangman
```

## 🎯 How to Play

1. Enter a secret word
2. Guess one letter at a time
3. You have **6 attempts** before the Hangman is complete
4. Guess all letters correctly to win!

## 📉 Lose Condition
```
 -----
 |   |
 O   |
/|\  |
/ \  |
     |
=========
```

## 🗂️ File Structure
```
📁 project
 ┣ main.c           # Main game logic
 ┣ ascii-art.c      # ASCII-Art
 ┣ ascii-art.h      # ASCII-Art header
 ┗ README.md        
```

## 👤 Author

Jyio
