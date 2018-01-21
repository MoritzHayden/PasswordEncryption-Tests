/*
* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
*	This program includes a user menu that provides commands	*
*	to the user that allows them to encrypt any	password using	*
*	a method of their choosing.									*
* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
*
*	Author: Hayden Moritz
*	Date: 1/15/2018
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
	int spot = 0;
	int passLen = decryptedPassword.length();
	int count = 0;
	char passArr [8][4];
	char PassArr1D [32];
	/*
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
	*/

	//Encrypt password
	//Store in 2D array
	/*
		TODO:
		Handle length > 8 case
	*/
	cout << endl << "2D Array:" << endl;
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			if (spot == decryptedPassword.length())
			{
				spot = 0;
				passArr[i][j] = decryptedPassword.at(0);
			}
			else
			{
				passArr[i][j] = decryptedPassword.at(spot);
			}
			cout << passArr[i][j] << " ";
			spot++;
			count++;
		}
		cout << endl;
	}

	//Convert 2D array to 1D column by column
	int row = 0;
	int col = 0;
	for (int l = 0; l < 32; l++)
	{
		PassArr1D[l] = passArr[row][col];
		row++;

		if (row == 4)
		{
			row = 0;
			col++;
		}
	}
	
	cout << endl;

	//Print 1D array
	cout << "1D Array:" << endl;
	for (int m = 0; m < 32; m++)
	{
		cout << PassArr1D[m] << " ";
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
	cout << "This program can encrypt your passwords." << endl;
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
