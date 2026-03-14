Week 2


**Created by**: Mehrooz Gill   
**Semester**: 1st Semester

# \# Task 1: Number Guess

# 

# \## Objective

# Create an interactive guessing game where the user tries to guess a randomly generated number with hints and attempt tracking.

# 

# \---

# 

# \## Description

# 

# This Flowgorithm program implements a number guessing game:

# \- \*\*Generates a random number\*\* within a specified range (typically 1-100)

# \- \*\*Takes user input\*\* for their guess

# \- \*\*Validates the guess\*\* against the random number

# \- \*\*Provides hints\*\*: "Too High" or "Too Low"

# \- \*\*Counts attempts\*\* until the user guesses correctly

# \- \*\*Displays final result\*\* with the total number of attempts

# 

# \---

# 

# \## Input

# \- A series of integer guesses from the user until they guess the correct number

# 

# \---

# 

# \## Output

# \- \*\*After each guess\*\*: "Too High" or "Too Low" feedback

# \- \*\*On correct guess\*\*: Success message with total attempts

# 

# \*\*Example Gameplay\*\*:

# ```

# === NUMBER GUESS GAME ===

# I have a number between 1 and 100. Guess it!

# 

# Guess 1: Enter your guess: 50

# Too Low! Try again.

# 

# Guess 2: Enter your guess: 75

# Too High! Try again.

# 

# Guess 3: Enter your guess: 62

# Too Low! Try again.

# 

# Guess 4: Enter your guess: 70

# Correct! You guessed it in 4 attempts!

# ```

# 

# \---

# 

# \## Concepts Used

# 

# ✓ \*\*Random Number Generation\*\* - Generate random number in a range  

# ✓ \*\*Input/Output Operations\*\* - Taking guesses and displaying feedback  

# ✓ \*\*Variables\*\* - Storing random number, user guess, attempt counter  

# ✓ \*\*Conditional Statements\*\* - If/else for validation  

# ✓ \*\*Loops\*\* - While loop to repeat until correct guess  

# ✓ \*\*Comparison Operators\*\* - <, >, ==  

# ✓ \*\*Counter/Accumulator\*\* - Incrementing attempts  

# 

# \---

# 

# \## Logic Flow

# 

# ```

# START

# &#x20; ↓

# Generate Random Number (1-100)

# Initialize Attempt Counter = 0

# &#x20; ↓

# LOOP:

# &#x20; ├─ Increment Attempt Counter

# &#x20; ├─ Take User Input (Guess)

# &#x20; ├─ Is Guess == Random Number?

# &#x20; │  ├─ YES → Display "Correct! Attempts: X" → Exit Loop

# &#x20; │  └─ NO ↓

# &#x20; ├─ Is Guess > Random Number?

# &#x20; │  ├─ YES → Display "Too High! Try again."

# &#x20; │  └─ NO → Display "Too Low! Try again."

# &#x20; └─ Repeat Loop

# &#x20; ↓

# END

# ```

# 

# \---

# 

# \## How to Use

# 

# 1\. \*\*Open the file\*\*: Open `number\_guess.fgd` in Flowgorithm

# 2\. \*\*Run the program\*\*: Click the Run button or press F5

# 3\. \*\*Start guessing\*\*: Enter numbers based on the hints

# 4\. \*\*Keep guessing\*\*: Continue until you guess the correct number

# 5\. \*\*View results\*\*: See how many attempts it took

# 

# \---

# 

# \## Files in This Folder

# 

# | File | Description |

# |------|-------------|

# | `number\_guess.fgd` | Flowgorithm source file |

# | `number\_guess\_screenshot.png` | Screenshot of the flowchart |

# | `README.md` | This file |

# 

# \---

# 

# \## Algorithm Steps

# 

# 1\. \*\*Initialize\*\*: Generate a random number between 1 and 100

# 2\. \*\*Set Counter\*\*: Initialize attempt counter to 0

# 3\. \*\*Loop Start\*\*: Begin while loop

# 4\. \*\*Increment\*\*: Add 1 to attempt counter

# 5\. \*\*Input\*\*: Ask user to enter their guess

# 6\. \*\*Compare\*\*: 

# &#x20;  - If guess equals random number → Go to step 7

# &#x20;  - If guess is greater → Print "Too High" → Go to step 3

# &#x20;  - If guess is less → Print "Too Low" → Go to step 3

# 7\. \*\*Success\*\*: Display congratulations message with attempt count

# 8\. \*\*End\*\*: Exit program

# 

# \---

# 

# \## Sample Test Cases

# 

# | Scenario | Random Number | Guesses | Output |

# |----------|---------------|---------|--------|

# | Best Case | 50 | 50 | Correct in 1 attempt |

# | Normal Case | 50 | 25, 75, 50 | Correct in 3 attempts |

# | Multiple Attempts | 50 | 1, 100, 25, 75, 40, 60, 50 | Correct in 7 attempts |

# | Close Guesses | 50 | 48, 49, 50 | Correct in 3 attempts |

# 

# \---

# 

# \## Game Statistics

# 

# \- \*\*Range\*\*: 1-100 (adjust as needed)

# \- \*\*Best Case\*\*: 1 attempt (lucky guess!)

# \- \*\*Average Case\*\*: 6-7 attempts

# \- \*\*Worst Case\*\*: Up to 100 attempts (systematic guessing)

# 

# \---

# 

# \## Key Features

# 

# ✓ \*\*Random number generation\*\* - Different number each game  

# ✓ \*\*Attempt tracking\*\* - Counts total guesses  

# ✓ \*\*User feedback\*\* - Clear hints (Too High/Too Low)  

# ✓ \*\*Loop implementation\*\* - Repeats until correct answer  

# ✓ \*\*Game logic\*\* - Proper validation and comparison  

# 

# \---

# 

# \## Difficulty Level

# 

# ⭐⭐ \*\*Medium\*\* - Combines loops, conditionals, and variables

# 

# \---

# 

# \## Skills Demonstrated

# 

# ✓ Understanding of loop structures  

# ✓ Random number generation  

# ✓ Conditional logic with multiple branches  

# ✓ Variable manipulation and counters  

# ✓ Game logic implementation  

# ✓ User interaction and feedback  

# 

# \---

# 

# \## Tips for Playing

# 

# \- \*\*Binary search strategy\*\*: Guess middle number, then adjust

# \- \*\*Track your guesses\*\*: Remember what you've already tried

# \- \*\*Listen to hints\*\*: Use "Too High/Too Low" feedback wisely

# 

# \*\*Example Strategy\*\*:

# ```

# Range: 1-100

# Guess 1: 50 (middle)

# Feedback: Too Low → New Range: 51-100

# Guess 2: 75 (middle of new range)

# Feedback: Too High → New Range: 51-74

# Guess 3: 62 (middle of new range)

# ... and so on

# ```

# 

# \---

# 

# \*\*Status\*\*: ✅ Complete  

# \*\*Date Completed\*\*: Week 2  

# \*\*Program Language\*\*: Flowgorithm

