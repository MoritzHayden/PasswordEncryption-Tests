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
				//Get input for password
				cout << "Password to encrypt: \t";
				cin >> passwordToEncrypt;
				//Get input for encryption method
				cout << "-------------------------------------------------" << endl;
				cout << "// ENCRYPTION METHODS //			|" << endl;
				cout << "1. Encrypt1					|" << endl;
				cout << "2. Encrypt2					|" << endl;
				cout << "3. Encrypt3					|" << endl;
				cout << "-------------------------------------------------" << endl;
				cout << "Method for encryption: \t";
				cin >> encryptionMethod;

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
				//Get input for password
				cout << "Password to decrypt: \t";
				cin >> passwordToDecrypt;
				//Decrypt the password
				decrypt1(passwordToDecrypt);
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
