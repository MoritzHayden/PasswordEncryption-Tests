# PasswordEncryption-Tests
This program will test a variety of password hashing techniques.

-----------------------------------------

// COMMANDS //
1. Encrypt a password.
2. View the last password and its hash.

EXIT: Exit the program.

HELP: Display this help menu.

-----------------------------------------

// ENCRYPTION METHODS //
1. Scrambled Table Algorithm (STA)
2. Encrypt2
3. Encrypt3

-----------------------------------------

Hash: Scrambled Table Algorithm (STA)

*Will be able to deploy to indefinite length when completed*

1. This hash takes a password (max length 32) and inserts it into a 8x4
	array by spelling the word over and over again ROW by ROW, until the array is filled.

EX: "Hello" becomes

	H e l l o H e l
	l o H e l l o H
	e l l o H e l l
	o H e l l o H e

2. The hash function then iterates through the 2D array and inserts the data into 
	a 1D array COLUMN by COLUMN.
	
EX: The above 2D array becomes

HleoeolHlHleleololHlHleoeolHlHle

3. Then, it converts each letter to its corresponding integer (A=1, B=2, etc,)

NOTE: If the array becomes longer than length 32 (due to double digit numbers),
truncate down to 32.

EX: The above 1D array becomes

81251551512812812512515121512812812515515128128125	<--	50 Bits

00000000000000000000000000000000					<--	32 Bits

Which truncates down to
81251551512812812512515121512812

4. Then, sum adjacent digits and place them in a 1D array. Truncate to 16 if necessary.

EX: The above array becomes

97666103973663603

Which truncates down to
9766610397366360

5. Finally, all non 0's are converted to their corresponding letter (1=A, 2=B, etc.)

EX: The above array becomes

igfffa0cigcffcf0

And the result is our hash.

-----------------------------------------

Hash: Encrypt2

*This hash function is not complete yet*

-----------------------------------------

Hash: Encrypt3

*This hash function is not complete yet*

-----------------------------------------
