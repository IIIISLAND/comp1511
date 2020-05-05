Write a C program order3_challenge2.c that reads 3 integers and prints them from smallest to largest.

You are only permitted to have 3 variables in your program and they must be of type int.

The restrictions of the previous challenge exercise also apply.

You are not permitted to use if statements.

You are not permitted to use loops (e.g. while).

You are not permitted to call functions other than printf and scanf. For example, you are not permitted to use functions from the math library.

You are not permitted to use printf inside expressions - you can only use printf as a statement (the way it has been used in lectures).

You are not permitted to assign variables inside expressions - you can only assign variables as a statement (the way it has been done in lectures).

For example, both of these are invalid:

(a < b) && printf("a"); // invalid

(a < b) && (a = b); // invalid

You can use printf to print the value of an expression, in other words you can have an expression inside printf.

You are only permitted to use parts of C covered in the weeks 1 and 2 lectures. For example, you are not permitted to use the ternary ?: operator. You are not permitted to use arrays. You are not permitted to define functions.

Your program should behave exactly like this example:

./order3_challenge2
Enter integer: 23
Enter integer: 5
Enter integer: 27
The integers in order are: 5 23 27
./order3_challenge2
Enter integer: 3
Enter integer: 6
Enter integer: 27
The integers in order are: 3 6 27
./order3_challenge2
Enter integer: 9
Enter integer: 8
Enter integer: 7
The integers in order are: 7 8 9

This is much more puzzle than a programming exercise.
Try to invent your own solution - don't google or ask others how do it.

Autotest is available to help you test your program - but it doesn't check that your code meets the above restrictions.