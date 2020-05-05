Write a C program caesar.c which reads characters from its input and writes the characters to its output encrypted with a Caesar cipher.
A Caesar cipher shifts each letter a certain number of positions in the alphabet.

The number of positions to shift will be given to your program as the first line of input. The next lines of input will be the actual text to be shifted.

Characters other than letters should not be encrypted.

Your program should stop only at the end of input.

Your program should contain at least one function other than main.

For example:

./caesar
1
This life well it's slipping right through my hands
Uijt mjgf xfmm ju't tmjqqjoh sjhiu uispvhi nz iboet
These days turned out nothing like I had planned
Uiftf ebzt uvsofe pvu opuijoh mjlf J ibe qmboofe

./caesar
10
abcdefghijklmnopqrstuvwxyz
klmnopqrstuvwxyzabcdefghij
ABCDEFGHIJKLMNOPQRSTUVWXYZ
KLMNOPQRSTUVWXYZABCDEFGHIJ

./caesar
-42
Control well it's slipping right through my hands
Myxdbyv govv sd'c cvszzsxq bsqrd drbyeqr wi rkxnc
These days?
Droco nkic?

Hint: You will have to read the integer for the shift amount first, which will be followed by a newline, which is not part of the message to be encrypted.

Hint: handle upper and lower case letters separately

Hint: use %

Hint: create a function with a prototype like this:

int encrypt(int character, int shift);
which returns the character shifted by the specified amount
Manually Cracking a Caesar Cipher
Here is some (New Zealand) English text that has been encrypted with a Caesar cipher.
Z uf dp drbvlg ze jfdvsfup vcjv'j tri
Nv fiuvi uzwwvivek uizebj rk kyv jrdv srij
Z befn rsflk nyrk pfl uzu reu Z nreer jtivrd kyv kilky
Jyv kyzebj pfl cfmv kyv svrty, pfl'iv jlty r urde czri
Use the program you have just written to discover the secret text?
Hint:: try different shifts until you see English.

Shift: 17
I do my makeup in somebody else's car
We order different drinks at the same bars
I know about what you did and I wanna scream the truth
She thinks you love the beach, you're such a damn liar