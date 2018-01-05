﻿/*
* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
*	This program includes a user menu that provides commands	*
*	to the user that allows them to encrypt and decrypt any		*
*	password or key using a method of their choosing.			*
* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
*
*	Author: Hayden Moritz
*	Date: 1/5/2018
*/


#include <iostream>
#include <string>
#include <vector>
using namespace std;

//Global variables
string command;
int commandInt = 0;
int encryptionMethod = 0;
int decryptionMethod = 0;
bool done = false;
string passwordToEncrypt;
string passwordToDecrypt;
string encryptedPassword;
string decryptedPassword;

//Help menu to show commands
void menu()
{
	cout << "-------------------------------------------------" << endl;
	cout << "// COMMANDS //					|" << endl;
	cout << "1. Encrypt a password.				|" << endl;
	cout << "2. Decrypt a password.				|" << endl;
	cout << "EXIT: Exit the program.				|" << endl;
	cout << "HELP: Display this help menu.			|" << endl;
	cout << "-------------------------------------------------" << endl << endl;
}

//Method to encrypt password
void encrypt1(string decryptedPassword)
{
	//Encrypt password
	encryptedPassword = decryptedPassword;

	//Output result
	cout << "Encrypted password: \t" << encryptedPassword << endl << endl;
}

//Method to encrypt password
void encrypt2(string decryptedPassword)
{
	//Encrypt password
	encryptedPassword = decryptedPassword;

	//Output result
	cout << "Encrypted password: \t" << encryptedPassword << endl << endl;
}

//Method to encrypt password
void encrypt3(string decryptedPassword)
{
	//Encrypt password
	encryptedPassword = decryptedPassword;

	//Output result
	cout << "Encrypted password: \t" << encryptedPassword << endl << endl;
}

//Method to decrypt password
void decrypt1(string encryptedPassword)
{
	//Decrypt password
	decryptedPassword = encryptedPassword;

	//Output result
	cout << "Decrypted password: \t" << decryptedPassword << endl << endl;
}

//Method to decrypt password
void decrypt2(string encryptedPassword)
{
	//Decrypt password
	decryptedPassword = encryptedPassword;

	//Output result
	cout << "Decrypted password: \t" << decryptedPassword << endl << endl;
}

//Method to decrypt password
void decrypt3(string encryptedPassword)
{
	//Decrypt password
	decryptedPassword = encryptedPassword;

	//Output result
	cout << "Decrypted password: \t" << decryptedPassword << endl << endl;
}

//Driver
void main()
{
	//Initiate program
	cout << "This program can encrypt and decrypt passwords." << endl;
	menu();

	//Test for the exit case
	while (!done)
	{
		//Obtain user input
		cout << ">> ";
		cin >> command;

		//Check user input
		if (command == "help" || command == "HELP" || command == "Help")
		{
			//Display command window
			menu();
		}
		else if (command == "exit" || command == "EXIT" || command == "Exit")
		{
			//Terminate program
			done = true;
		}
		else if (command == "1" || command == "2" || command == "3"
			|| command == "4" || command == "5")
		{
			//Convert input to int
			commandInt = stoi(command);
			if (commandInt == 1)
			{
				//Get input for encryption method
				cout << "-------------------------------------------------" << endl;
				cout << "// ENCRYPTION METHODS //			|" << endl;
				cout << "1. Encrypt1					|" << endl;
				cout << "2. Encrypt2					|" << endl;
				cout << "3. Encrypt3					|" << endl;
				cout << "-------------------------------------------------" << endl;
				cout << "Method for encryption: \t";
				cin >> encryptionMethod;
				//Get input for password
				cout << "Password to encrypt: \t";
				cin >> passwordToEncrypt;

				//Check encryption method
				if (encryptionMethod == 1 || encryptionMethod == 2 || encryptionMethod == 3)
				{
					if (encryptionMethod == 1)
					{
						//Encrypt the password with Encrypt1
						encrypt1(passwordToEncrypt);
					}
					else if (encryptionMethod == 2)
					{
						//Encrypt the password with Encrypt2
						encrypt2(passwordToEncrypt);
					}
					else if (encryptionMethod == 3)
					{
						//Encrypt the password with Encrypt3
						encrypt3(passwordToEncrypt);
					}
					else
					{
						cout << "ERROR: INVALID INPUT" << endl << endl;
					}
				}
				else
				{
					cout << "ERROR: INVALID INPUT" << endl << endl;
				}
			}
			else if (commandInt == 2)
			{
				//Get input for decryption method
				cout << "-------------------------------------------------" << endl;
				cout << "// DECRYPTION METHODS //			|" << endl;
				cout << "1. Decrypt1					|" << endl;
				cout << "2. Decrypt2					|" << endl;
				cout << "3. Decrypt3					|" << endl;
				cout << "-------------------------------------------------" << endl;
				cout << "Method for Decryption: \t";
				cin >> decryptionMethod;
				//Get input for password
				cout << "Password to decrypt: \t";
				cin >> passwordToEncrypt;

				//Check decryption method
				if (decryptionMethod == 1 || decryptionMethod == 2 || decryptionMethod == 3)
				{
					if (decryptionMethod == 1)
					{
						//Decrypt the password with Encrypt1
						decrypt1(passwordToEncrypt);
					}
					else if (decryptionMethod == 2)
					{
						//Decrypt the password with Encrypt2
						decrypt2(passwordToEncrypt);
					}
					else if (decryptionMethod == 3)
					{
						//Decrypt the password with Encrypt3
						decrypt3(passwordToEncrypt);
					}
					else
					{
						cout << "ERROR: INVALID INPUT" << endl << endl;
					}
				}
				else
				{
					cout << "ERROR: INVALID INPUT" << endl << endl;
				}
			}
			else
			{
				cout << "ERROR: INVALID INPUT" << endl << endl;
			}
		}
		else
		{
			cout << "ERROR: INVALID INPUT" << endl << endl;
		}
	}
}
