Write a C program frequency_analysis.c which reads characters from its input until end of input.
It should then print the occurrence frequency for each of the 26 letters 'a'..'z'.

The frequency should be printed as a decimal value and an absolute number in exactly the format below.

Note upper and lower case letters are counted together.

For example:

./frequency_analysis
Hello and goodbye.

'a' 0.066667 1
'b' 0.066667 1
'c' 0.000000 0
'd' 0.133333 2
'e' 0.133333 2
'f' 0.000000 0
'g' 0.066667 1
'h' 0.066667 1
'i' 0.000000 0
'j' 0.000000 0
'k' 0.000000 0
'l' 0.133333 2
'm' 0.000000 0
'n' 0.066667 1
'o' 0.200000 3
'p' 0.000000 0
'q' 0.000000 0
'r' 0.000000 0
's' 0.000000 0
't' 0.000000 0
'u' 0.000000 0
'v' 0.000000 0
'w' 0.000000 0
'x' 0.000000 0
'y' 0.066667 1
'z' 0.000000 0
./frequency_analysis
Hey! Hey! Hey!
I don't like walking around this old and empty house
So hold my hand, I'll walk with you my dear

'a' 0.072289 6
'b' 0.000000 0
'c' 0.000000 0
'd' 0.084337 7
'e' 0.084337 7
'f' 0.000000 0
'g' 0.012048 1
'h' 0.096386 8
'i' 0.072289 6
'j' 0.000000 0
'k' 0.036145 3
'l' 0.084337 7
'm' 0.036145 3
'n' 0.060241 5
'o' 0.084337 7
'p' 0.012048 1
'q' 0.000000 0
'r' 0.024096 2
's' 0.036145 3
't' 0.048193 4
'u' 0.036145 3
'v' 0.000000 0
'w' 0.036145 3
'x' 0.000000 0
'y' 0.084337 7
'z' 0.000000 0
Hint: hint use getchar to read characters (don't use scanf or fgets).
Hint: make sure you understand this example program which reads characters until end of input.

Hint: use an array to store counts of each letter.

Hint: make sure you understand this example program which counts integers from the range 0..99.