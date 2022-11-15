//**********************************************************************
// File:				main.cpp
// Author:			CS, Pacific University
// Date:				11/16/2021
// Class:				CS 150-0X
// Assignment:	Lab 12
// Purpose:			Implement a very simple cryptography algorithm
// Hours:
//**********************************************************************
#include <iostream>
#include <fstream>

using namespace std;

const int MAX_ROWS = 15;
const	int MAX_COLS = 15;
const int MAX_KEYS = 10;

void readFromFile (char charArray[][MAX_COLS], int &numRows,
	int &numCols, const char fileName[]);
void displayArray (const char charArray[][MAX_COLS], int numRows,
	int numCols);
void getCodeKey (const char prompt[], char codekey[]);
void encode (char charArray[][MAX_COLS], int numRows, int numCols,
	const char codekey[]);
void decode (char charArray[][MAX_COLS], int numRows, int numCols,
	const char codekey[]);
void writeToFile (char charArray[][MAX_COLS], int &numRows,
	int &numCols, const char fileName[]);
/***********************************************************************
Function:     main

Description:	Driver

Parameters:   None

Returned:     Exit Status
***********************************************************************/
int main () {
	const char PLAINTEXT_NAME[] = "plaintext.txt";
	const char CIPHERTEXT_NAME[] = "ciphertext.txt";
	const char CODE_KEY_PROMPT[] = "Enter code key: ";

	char charArray[MAX_ROWS][MAX_COLS];
	char codekey[MAX_KEYS];
	int numRows, numCols;

	cout << "Original File:" << endl;
	readFromFile (charArray, numRows, numCols, PLAINTEXT_NAME);
	/*displayArray (charArray, numRows, numCols);
	cout << endl;

	getCodeKey (CODE_KEY_PROMPT, codekey);
	cout << endl << "Encrypted File: " << endl;
	encode (charArray, numRows, numCols, codekey);
	displayArray (charArray, numRows, numCols);
	cout << endl;
	writeToFile (charArray, numRows, numCols, CIPHERTEXT_NAME);

	cout << endl << "Decrypted File: " << endl;
	decode (charArray, numRows, numCols, codekey);
	displayArray (charArray, numRows, numCols);
	cout << endl;*/

	return EXIT_SUCCESS;
}

/***********************************************************************
Function:			readFromFile

Description:	Fills a 2D array with characters from a data file
							character by character and returns the filled array
							as well as the number of rows and columns filled.

							NOTE: The file must have the same number of characters
										on each row or this function will not work

Parameters:		charArray  - array to be filled
							numRows		 - number of rows filled
							numCols		 - number of columns filled
							fileName	 - file name to read from

Returned:			None
***********************************************************************/
void readFromFile (char charArray[][MAX_COLS], int &numRows,
	int &numCols, const char fileName[]) {
	ifstream inFile;
	numRows = numCols = 0;
	char ch;

	inFile.open (fileName);
	if (inFile.fail ()) {
		cout << "Error opening file: " << fileName << endl;
		exit (EXIT_FAILURE);
	}

	ch = inFile.get ();
	while (ch != EOF) {
		if ('\n' == ch) {
			numCols = 0;
			numRows++;
		}
		else {
			charArray[numRows][numCols] = ch;
			numCols++;
		}
		ch = inFile.get ();
		if (ch == EOF) {
			numRows++;
		}
	}
	inFile.close ();
}

/***********************************************************************
Function:			displayArray

Description:	Displays the 2D array to the display.

Parameters:		charArray  - array to be filled
							numRows		 - number of rows filled
							numCols		 - number of columns filled

Returned:			None
***********************************************************************/
void displayArray (const char charArray[][MAX_COLS], int numRows,
	int numCols) {

}

/***********************************************************************
Function:			getCodeKey

Description:	Get the code key after prompting the user
							HINT: You can read directly into a character array from
										the keyboard. The character array is null terminated

Parameters:		prompt	- prompt given to the user
							codekey	- code key used for encryption or decryption

Returned:			None
***********************************************************************/
void getCodeKey (const char prompt[], char codekey[]) {

}

/***********************************************************************
Function:			encode

Description:	Encodes a plaintext message
							HINT1: The function strlen can be used to find the number
										of characters in the codekey
							HINT2: Remember the coolest operator on the planet!!!!

Parameters:		charArray  - array to be filled
							numRows		 - number of rows filled
							numCols		 - number of columns filled
							codekey		 - secret key for encryption

Returned:			None
***********************************************************************/
void encode (char charArray[][MAX_COLS], int numRows, int numCols,
	const char codekey[]) {

}

/***********************************************************************
Function:			decode

Description:	Decodes a ciphertext message

Parameters:		charArray  - array to be filled
							numRows		 - number of rows filled
							numCols		 - number of columns filled
							codekey		 - secret key for decryption

Returned:			None
***********************************************************************/
void decode (char charArray[][MAX_COLS], int numRows, int numCols,
	const char codekey[]) {

}

/***********************************************************************
Function:			writeToFile

Description:	Writes a 2D array to a file

Parameters:		charArray  - array to be filled
							numRows		 - number of rows filled
							numCols		 - number of columns filled
							fileName	 - file name to read from

Returned:			None
***********************************************************************/
void writeToFile (char charArray[][MAX_COLS], int &numRows,
	int &numCols, const char fileName[]) {

}