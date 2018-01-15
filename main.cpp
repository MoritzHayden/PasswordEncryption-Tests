/*
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
string lastPass = "";
string lastHash = "";
string command = "";
int commandInt = 0;
int encryptInt = 0;
string encryptionMethod = "";
bool done = false;
string passwordToEncrypt = "";
string encryptedPassword = "";

//Help menu to show commands
void menu()
{
	cout << "-------------------------------------------------" << endl;
	cout << "// COMMANDS //					|" << endl;
	cout << "1. Encrypt a password.				|" << endl;
	cout << "2. View the last password and its hash.		|" << endl;
	cout << "EXIT: Exit the program.				|" << endl;
	cout << "HELP: Display this help menu.			|" << endl;
	cout << "-------------------------------------------------" << endl << endl;
}

//Method 1 to encrypt password
//A.K.A. Scrambled Table Algoritm (STA)
void encrypt1(string decryptedPassword)
{
	int passLen = decryptedPassword.length();
	int count = 0;
	char passArr [8][4];
	if (passLen < 8)
	{
		//Enumerate string
		if (passLen == 7)
		{
			decryptedPassword.push_back('0');
		}
		else if (passLen == 6)
		{
			decryptedPassword.push_back('0');
			decryptedPassword.push_back('0');
		}
		else if (passLen == 5)
		{
			decryptedPassword.push_back('0');
			decryptedPassword.push_back('0');
			decryptedPassword.push_back('0');
		}
		else if (passLen == 4)
		{
			decryptedPassword.push_back('0');
			decryptedPassword.push_back('0');
			decryptedPassword.push_back('0');
			decryptedPassword.push_back('0');
		}
		else if (passLen == 3)
		{
			decryptedPassword.push_back('0');
			decryptedPassword.push_back('0');
			decryptedPassword.push_back('0');
			decryptedPassword.push_back('0');
			decryptedPassword.push_back('0');
		}
		else if (passLen == 2)
		{
			decryptedPassword.push_back('0');
			decryptedPassword.push_back('0');
			decryptedPassword.push_back('0');
			decryptedPassword.push_back('0');
			decryptedPassword.push_back('0');
			decryptedPassword.push_back('0');
		}
		else if (passLen == 1)
		{
			decryptedPassword.push_back('0');
			decryptedPassword.push_back('0');
			decryptedPassword.push_back('0');
			decryptedPassword.push_back('0');
			decryptedPassword.push_back('0');
			decryptedPassword.push_back('0');
			decryptedPassword.push_back('0');
		}
		else
		{
			decryptedPassword.push_back('0');
			decryptedPassword.push_back('0');
			decryptedPassword.push_back('0');
			decryptedPassword.push_back('0');
			decryptedPassword.push_back('0');
			decryptedPassword.push_back('0');
			decryptedPassword.push_back('0');
			decryptedPassword.push_back('0');
		}
	}
	else
	{
		//Do nothing
	}
	//Encrypt password
	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			passArr[i][j] = decryptedPassword.at(j);
		}
	}

	//Output result
	cout << "Encrypted password: \n";
	for (int l = 0; l < 8; l++)
	{
		for (int k = 0; k < 4; k++)
		{
			cout << passArr[l][k] << " ";
			count++;
			
			if (count == 8 || count == 16 || count == 24 || count == 32)
			{
				cout << endl;
			}
		}
	}
	
	//	TODO:
	//	Assign lastHash here

	cout << endl;
}

//Method 2 to encrypt password
void encrypt2(string decryptedPassword)
{
	//Encrypt password
	encryptedPassword = decryptedPassword;

	//Output result
	cout << "Encrypted password: \t" << encryptedPassword << endl << endl;

	//	TODO:
	//	Assign lastHash here
}

//Method 3 to encrypt password
void encrypt3(string decryptedPassword)
{
	//Encrypt password
	encryptedPassword = decryptedPassword;

	//Output result
	cout << "Encrypted password: \t" << encryptedPassword << endl << endl;

	//	TODO:
	//	Assign lastHash here
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
				cout << "1. Scrambled Table Algoritm (STA)		|" << endl;
				cout << "2. Encrypt2					|" << endl;
				cout << "3. Encrypt3					|" << endl;
				cout << "-------------------------------------------------" << endl;
				cout << "Method for encryption: \t";
				cin >> encryptionMethod;
				
				//Check encryption method
				if (encryptionMethod == "1" || encryptionMethod == "2" || encryptionMethod == "3")
				{
					encryptInt = stoi(encryptionMethod);

					if (encryptInt == 1)
					{
						//Get input for password
						cout << "Password to encrypt: \t";
						cin >> passwordToEncrypt;
						lastPass = passwordToEncrypt;
						//Encrypt the password with Encrypt1
						encrypt1(passwordToEncrypt);
					}
					else if (encryptInt == 2)
					{
						//Get input for password
						cout << "Password to encrypt: \t";
						cin >> passwordToEncrypt;
						lastPass = passwordToEncrypt;
						//Encrypt the password with Encrypt2
						encrypt2(passwordToEncrypt);
					}
					else if (encryptInt == 3)
					{
						//Get input for password
						cout << "Password to encrypt: \t";
						cin >> passwordToEncrypt;
						lastPass = passwordToEncrypt;
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
				cout << "The last password was:	" << lastPass << endl;
				cout << "And its hash was:	" << lastHash << endl << endl;
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
