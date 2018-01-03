#include <iostream>
#include <string>
#include <vector>
using namespace std;

//Global variables
string command;
int commandInt = 0;
bool done = false;
string currentPassword;

//Help menu to show commands
void menu()
{
	cout << "-------------------------------------------------" << endl;
	cout << "// COMMANDS //					|" << endl;
	cout << "1. Enter a new password to be manipulated.	|" << endl;
	cout << "2. Display the current password.		|" << endl;
	cout << "3. Encrypt the current password.		|" << endl;
	cout << "4. Decrypt the current password.		|" << endl;
	cout << "EXIT: Exit the program.				|" << endl;
	cout << "HELP: Display this help menu.			|" << endl;
	cout << "-------------------------------------------------" << endl << endl;
}

//Method to get a new password from the user
void getNewPassword()
{
	cout << "Please provide a new password to be encrypted: ";
	cin >> currentPassword;
	cout << endl;
}

//Method to encrypt password
void encrypt(string decryptedPassword)
{
	int passLen = decryptedPassword.length();
	vector<int> passVector;

	//Insert password into vector
	for (int i = 0; i < passLen; i++)
	{
		passVector.push_back(decryptedPassword.at(i));
	}

	//Print password vector
	for (int i = 0; i < passLen; i++)
	{
		cout << passVector.at(i) << endl;
	}

	cout << "This option isn't available yet." << endl << endl;
}

//Method to decrypt password
void decrypt(string encryptedPassword)
{
	cout << "This option isn't available yet." << endl << endl;
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
				//Store new password
				cout << "New password: ";
				cin >> currentPassword;
				cout << endl;
			}
			else if (commandInt == 2)
			{
				//Return current password
				cout << "Current password: " << currentPassword << endl << endl;
			}
			else if (commandInt == 3)
			{
				//Encrypt current password
				encrypt(currentPassword);
			}
			else if (commandInt == 4)
			{
				//Decrypt current password
				decrypt(currentPassword);
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

// TODO
// 1. Make command checks (line 61) case-insensitive
// 2. Add more encryption methods
