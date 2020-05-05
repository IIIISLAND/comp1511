Write a C program substitution.c which reads characters from its input and writes the characters to its output encrypted with a Substitution cipher.
A Substitution cipher maps each letter to another letter.

The mapping will be given to your program as the first line of input. It will contain 26 characters: an ordering of the letters 'a'..'z'. The next lines will be the text to be encrypted.

Characters other than letters should not be encrypted.

Your program should stop only at the end of input.

Your program should contain at least one function other than main.

For example:

./substitution
qwertyuiopasdfghjklzxcvbnm
I was scared of dentists and the dark
O vql leqktr gy rtfzolzl qfr zit rqka
I was scared of pretty girls and starting conversations
O vql leqktr gy hktzzn uoksl qfr lzqkzofu egfctklqzogfl

./substitution
abcdefghijklmnopqrstuvwxyz
The identity cipher!!!
The identity cipher!!!

./substitution
bcdefghijklmnopqrstuvwxyza
The Caesar cipher is a subset of the substitution cipher!
Uif Dbftbs djqifs jt b tvctfu pg uif tvctujuvujpo djqifs!