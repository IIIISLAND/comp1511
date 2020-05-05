Write a C program, string_to_lower_args.c, which reads command line arguments then prints them out. When it prints out, it will convert all upper case letters to lower case.

Note: If there are any characters that are not Upper Case letters, they do not need to be converted.

Note: The apostrophe ' character causes problems when trying to print it out. There will be no tests using an ' in this activity.

The output from your program should look exactly like this:

dcc string_to_lower_args.c -o string_to_lower_args
./string_to_lower_args Hello World!
hello world!
./string_to_lower_args Its Over 9000!
its over 9000!
./string_to_lower_args KAMEHAMEHA
kamehameha
Need a Hint?
There's a way to decide if characters are upper case if they're between 'A' and 'Z'. They can then be treated as numbers to convert to lower case.

Otherwise, there is a C library called ctype.h that might have some useful functions!