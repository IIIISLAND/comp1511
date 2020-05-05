This question was taken from a past exam paper. It is an example of the hardest question at the end of the paper and it is usually expected that less than 5% of students can complete this question within the time constraints.
Write a C program knight_moves.c which prints sequences of moves which takes a knight from a specified square on a chessboard to another specified square on the chessboard.

A chessboard is an 8x8 square matrix. We label each square as below:

a8 b8 c8 d8 e8 f8 g8 h8
a7 b7 c7 d7 e7 f7 g7 h7
a6 b6 c6 d6 e6 f6 g6 h6
a5 b5 c5 d5 e5 f5 g5 h5
a4 b4 c4 d4 e4 f4 g4 h4
a3 b3 c3 d3 e3 f3 g3 h3
a2 b2 c2 d2 e2 f2 g2 h2
a1 b1 c1 d1 e1 f1 g1 h1
A knight makes an L-shaped move. It moves either two squares horizontally and one square vertically or two squares vertically and one square horizontally.

For example, a knight at d4 can move to one of eight squares: c2, e2, b3, b5, c6, e6, f3 or f5.

A move can not take a knight off the chessboard. Hence, a knight on square near the edge of the board will have fewer possible moves.

For example, a knight at a1 can move only to c2 and b3.

Write a C program which takes two arguments: a starting square and and a finishing square.

It should print a sequence of moves which take a knight from the starting square to the finishing square. This sequence of moves should be as short as possible.

In many cases there are multiple shortest sequences, your program must print all of the sequences in alphabetic order

For example:

dcc -o knight_moves knight_moves.c
./knight_moves d4 b3
d4 b3 
./knight_moves d4 a1
d4 b3 a1
d4 c2 a1
./knight_moves g2 b2
g2 e1 d3 b2
g2 e3 c4 b2
g2 e3 d1 b2
g2 f4 d3 b2
Assumptions/Restrictions/Clarifications

Your program must complete in 60 seconds when executed with dcc --valgrind

Your can assume there are two command-line arguments and they correctly identify squares on the board.

You can assume the starting and finishing squares are different.