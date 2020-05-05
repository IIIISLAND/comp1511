Write a program parrot.c that uses getchar() and putchar() to echo the user's input.
getchar() reads the next character (byte) from standard input and returns it. If getchar() is unable to read a character it will return the special value EOF defined in stdio.h. This will happen for example when reading from a file when the end of the file is reached.

You can simulate the end of a file being reached on a Linux (and Unix-like) terminal by holding the Ctrlkey and pressing the D key -  This will cause getchar() to return the special EOF value.

putchar() takes a single character (byte) as a parameter and prints it to standard output.

For example:

dcc parrot.c -o parrot
./parrot
abc
abc
ABCabc123
ABCabc123
abc
abc
xyz
xyz

When you think your program is working you can use autotest to run some simple automated tests:

