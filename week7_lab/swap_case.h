Write a C program swap_case.c which reads characters from its input and writes the same characters to its output with lower case letters converted to upper case and upper case letters converted to lower case.
Your program should stop only at the end of input.

For example:

dcc swap_case.c -o swap_case
./swap_case
Are you saying 'Boo' or 'Boo-Urns'?
aRE YOU SAYING 'bOO' OR 'bOO-uRNS'?
In this house, we obey the laws of thermodynamics!
iN THIS HOUSE, WE OBEY THE LAWS OF THERMODYNAMICS!
UPPER !@#$% lower
upper !@#$% LOWER

Hint: hint use getcharto read characters (don't use scanf or fgets).
Hint: you need only a single int variable. Don't use an array.

Hint: use putchar to output each character.

Hint: make sure you understand this example program which reads characters until end of input.

Hint: make sure you understand this example program which reads characters, printing them with lower case letters converted to upper case.

Hint: create a function with a prototype like this:

int swap_case(int character);
which:
returns the character in lower case if it is an upper case letter
returns the character in upper case if it is a lower case letter
returns the character unchanged otherwise