Computers encode characters (letters, numbers, and symbols) as numbers. For this exercise we'll assume the ASCII encoding is used. As a side note, ASCII is a subset of the most widely used modern character encoding: UTF-8
In ASCII the integers (0-31) represent control characters, which don't print anything. Similarly, the integer 127 represents another special character, the delete character. The integers 32 to 126 are printing characters - for example the integer 42 represents an asterisk ('*') character.

Create a C program called character_numbers.c which prints the integers 32 to 126 in decimal and hexadecimal with the the character they represent in ASCII.

Match the example output below EXACTLY:

dcc character_numbers.c -o character_numbers
./character_numbers
 32 0x20
 33 0x21 !
 34 0x22 "
 35 0x23 #
 36 0x24 $
 37 0x25 %
 38 0x26 &
 39 0x27 '
 40 0x28 (
 41 0x29 )
 42 0x2a *
 43 0x2b +
 44 0x2c ,
 45 0x2d -
 46 0x2e .
 47 0x2f /
 48 0x30 0
 49 0x31 1
 50 0x32 2
 51 0x33 3
 52 0x34 4
 53 0x35 5
 54 0x36 6
 55 0x37 7
 56 0x38 8
 57 0x39 9
 58 0x3a :
 59 0x3b ;
 60 0x3c <
 61 0x3d =
 62 0x3e >
 63 0x3f ?
 64 0x40 @
 65 0x41 A
 66 0x42 B
 67 0x43 C
 68 0x44 D
 69 0x45 E
 70 0x46 F
 71 0x47 G
 72 0x48 H
 73 0x49 I
 74 0x4a J
 75 0x4b K
 76 0x4c L
 77 0x4d M
 78 0x4e N
 79 0x4f O
 80 0x50 P
 81 0x51 Q
 82 0x52 R
 83 0x53 S
 84 0x54 T
 85 0x55 U
 86 0x56 V
 87 0x57 W
 88 0x58 X
 89 0x59 Y
 90 0x5a Z
 91 0x5b [
 92 0x5c \
 93 0x5d ]
 94 0x5e ^
 95 0x5f _
 96 0x60 `
 97 0x61 a
 98 0x62 b
 99 0x63 c
100 0x64 d
101 0x65 e
102 0x66 f
103 0x67 g
104 0x68 h
105 0x69 i
106 0x6a j
107 0x6b k
108 0x6c l
109 0x6d m
110 0x6e n
111 0x6f o
112 0x70 p
113 0x71 q
114 0x72 r
115 0x73 s
116 0x74 t
117 0x75 u
118 0x76 v
119 0x77 w
120 0x78 x
121 0x79 y
122 0x7a z
123 0x7b {
124 0x7c |
125 0x7d }
126 0x7e ~
When you think your program is working you can use autotest to run some simple automated tests: