Write a C program devowel.c which reads characters from its input 
and writes the same characters to its output, 
except it does not write lower case vowels ('a', 'e','i', 'o', 'u').
Your program should stop only at the end of input
./devowel
Are you saying 'Boo' or 'Boo-Urns'?
Ar y syng 'B' r 'B-Urns'?
In this house, we obey the laws of thermodynamics!
In ths hs, w by th lws f thrmdynmcs!
Hint: hint use getcharto read characters (don't use scanf or fgets).
Hint: you need only a single int variable. Don't use an array.
Hint: use putchar to output each character.
Hint: make sure you understand this example program which reads characters until end of input.
Hint: make sure you understand this example program which reads characters, printing them with lower case letters converted to upper case.
Hint: create a function with a prototype like this:
int is_vowel(int character);
which returns 1 the character is a lower case vowel and 0 otherwise.
Hint: To tell the program you have finished typing, you can press Ctrl+D.