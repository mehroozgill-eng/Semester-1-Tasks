# Week 2

# Task 3: Quiz Game

Created by: Mehrooz Gill  
  
Semester: 1st Semester



 Objective

Create an interactive quiz game with two difficulty modes (Easy and Hard) that tests user knowledge about football with replay option.


 Description



A quiz game with:

Two Difficulty Modes: Easy (+10 points) and Hard (+20 points)

5 Movies Questions: Multiple choice questions (3 options each)

Score Calculation: Based on difficulty level

Results Display: Shows final score and correct answers count

Play Again Option: Allows user to play multiple rounds







 Input

 Mode selection: Easy or Hard

 User answers for 5 questions (a, b, or c)

 Play again choice (Yes/No)







 Output

 Questions with 3 answer options

 Final score and correct answers count

 Play again prompt



Example Gameplay:

```

=== Movies QUIZ GAME ===

Select Mode:

1. Easy (10 points per question)

2. Hard (20 points per question)

Your choice: 1



Question 1: How many players are in a football team?

a) 10  b) 11  c) 12

Your answer: b

✓ Correct!



Question 2: What is the duration of a football match?

a) 60 min  b) 90 min  c) 120 min

Your answer: b

✓ Correct!



... (3 more questions)



=== RESULTS ===

Difficulty: Easy

Correct Answers: 5

Total Score: 50 points



Do you want to play again? (y/n): y

(Game restarts)





 Concepts Used



✓ Conditional Statements - Mode selection and answer validation  

✓ Loops - Loop for questions and play again loop  

✓ Variables - Score counter, correct answer counter  

✓ Input/Output - Questions and results display  

✓ Comparison Operators - Check correct answers  

✓ Accumulator - Calculate total score  



 Game Features



| Feature | Easy Mode | Hard Mode |

|---------|-----------|-----------|

| Points per Question | 10 | 20 |

| Total Questions | 5 | 5 |

| Max Score | 50 | 100 |

| Options per Question | 3 | 3 |

| Play Again | Yes | Yes |



 Files in This Folder



| File | Description |

|------|-------------|

| `quiz\_game.fgd` | Flowgorithm source file |

| `quiz\_game\_screenshot.png` | Screenshot of the flowchart |

| `README.md` | This file |



 Algorithm Steps



1\. Display game title

2\. Outer Loop (Play Again):

  - Get mode selection (Easy/Hard)

  - Set points per question (10 for Easy, 20 for Hard)

  - \*\*Inner Loop\*\* (5 Questions):

  - Display question with 3 options

  - Get user answer (a, b, or c)

  - Check if correct

  - Add points if correct

  - Increment correct counter

  - Display final score and correct answers

  - Ask "Play Again?" (y/n)

  - If yes, repeat outer loop; if no, exit

3. End program






 Difficulty Level



⭐⭐⭐ Hard - Nested loops, conditions, and scoring logic







 Skills Demonstrated



✓ Nested loop structures  

✓ Mode-based programming  

✓ Quiz logic implementation  

✓ Score calculation with multipliers  

✓ Conditional validation  

✓ Game state management  

✓ Replay functionality  




Status: ✅ Complete  

Date Completed: Week 2  

Program Language: Flowgorithm

