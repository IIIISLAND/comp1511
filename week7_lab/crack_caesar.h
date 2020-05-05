Write a C program crack_caesar.c which decrypts text encrypted by an unknown Caesar cipher.
Your program should make no assumptions about the language of the original text - don't assume its English. However, you can assume the English alphabet ('a'..'z').

Your program will be given as a first line of input the name of a file containing a large amount of unencrypted text in the same language as the encrypted text.

For example for example your program might be given this file containing 188k characters of English text (wikipedia sentences from here)

Your program will be given the encrypted text on the next lines of input. It should print its decryption.

For example, here is some English text encrypted with a Caesar cipher with an unknown shift:

Kyzj zj fli crjk xffuspv
Z yrkv kf wvvc kyv cfmv svknvve lj uzv
Slk zk'j fmvi
Aljk yvri kyzj reu kyve Z'cc xf
Pfl xrmv dv dfiv kf czmv wfi
Dfiv kyre pfl'cc vmvi befn
So for example:
./crack_caesar
wiki_sentences.txt
Kyzj zj fli crjk xffuspv
Z yrkv kf wvvc kyv cfmv svknvve lj uzv
Slk zk'j fmvi
Aljk yvri kyzj reu kyve Z'cc xf
Pfl xrmv dv dfiv kf czmv wfi
Dfiv kyre pfl'cc vmvi befn

This is our last goodbye
I hate to feel the love between us die
But it's over
Just hear this and then I'll go
You gave me more to live for
More than you'll ever know
You may assume the filename given on the first line of input is at most 1000 characters.
You may assume the encrypted text of stdin contains at most 10000 characters.

You may assume the unencrypted example text in the file contains at most 250000 characters.

Hint: use fopen to open the file and fgetc to read the file. These won't be covered in lectures, so read this example program to see how to use this functions to read a file.

Hint: read all the encrypted text into an array, then decrypt it.