Write a C program crack_substitution.c which decrypts text encrypted by an unknown s cipher.
Your program should make no assumptions about the language of the original text - don't assume its English. In other words don't hard code English properties into your program, extract the statistical properties from the sample plain text. However, you can assume the English alphabet ('a'..'z').

Your program will be given as its first line of input the name of a file containing a large amount of unencrypted text in the same language as the encrypted text.

Your program will be given the encrypted text on the next lines. You may read it all before printing the decryption.

For example:

./crack_substitution
wiki_sentences.txt
M'ka paat dra qegbu, ueta md xbb
Rxu vw fxya teq
Umxvetup, ogmbbmxtd, mt Oab-Xmg teq
Red psvvag tmlrdp, vmu Jsbw
Qrat wes xtu M qaga negakag qmbu
Dra fgxzw uxwp, fmdw bmlrdp
Dra qxw wes'u cbxw qmdr va bmya x frmbu
Qmbb wes pdmbb beka va
Qrat M'v te betlag westl xtu oaxsdmnsb?
Qmbb wes pdmbb beka va
Qrat M'ka led tedrmtl osd vw xfrmtl pesb?
M yteq wes qmbb, M yteq wes qmbb
M yteq drxd wes qmbb
Qmbb wes pdmbb beka va qrat M'v te betlag oaxsdmnsb?
M'ka paat dra qegbu, bmd md sc
Xp vw pdxla teq
Frxbbatlmtl xtlabp mt x taq xla teq
Red psvvag uxwp, gefy t gebb
Dra qxw wes cbxw neg va xd wesg preq
Xtu xbb dra qxwp, M led de yteq
Wesg cgaddw nxfa xtu abafdgmf pesb

I've seen the world, done it all
Had my cake now
Diamonds, brilliant, in Bel-Air now
Hot summer nights, mid July
When you and I were forever wild
The crazy days, city lights
The way you'd play with me like a child
Will you still love me
When I'm no longer young and beautiful?
Will you still love me
When I've got nothing but my aching soul?
I know you will, I know you will
I know that you will
Will you still love me when I'm no longer beautiful?
I've seen the world, lit it up
As my stage now
Challenging angels in a new age now
Hot summer days, rock n roll
The way you play for me at your show
And all the ways, I got to know
Your pretty face and electric soul
You may assume the encrypted text on stdin contains at most 10000 characters.
You may assume the unencrypted example text in the file contains at most 250000 characters.

Hint: you will need to look at the probabilities of sequences of 2 or perhaps 3 letters occurring or perhaps the probabilities of words.

Hint: use fopen to open the file and fgetc to read the file. These won't be covered in lectures, so read this example program to see how to use this functions to read a file.

An autotest is available to help you test your program but because this is a difficult problem it is possible very good attempts at the problem won't pass the autotests.