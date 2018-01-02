#include <iostream>
#include <string>
#include <sstream>
using namespace std;

//Global variables
string command = 0;
bool done = false;
string currentPassword;

//User interface
void menu()
{
	cout << "-------------------------------------------------" << endl;
	cout << "// COMMANDS //					|" << endl;
	cout << "1. Enter a new password to be manipulated.	|" << endl;
	cout << "2. Display the current password.		|" << endl;
	cout << "3. Encrypt the current password.		|" << endl;
	cout << "4. Decrypt the current password.		|" << endl;
	cout << "5. Exit the program.				|" << endl;
	cout << "HELP: Display this help menu.			|" << endl;
	cout << "-------------------------------------------------" << endl;
	cout << "Please enter a command (1-5): " << endl;
	cout << ">> ";
	cin >> command;

	//Check if input is valid or help
	if (command == "1" || command == "2" || command == "3" || command == "4" || command == "5")
	{

	}
	else if ((command.compare("HELP")) || (command.compare == "help"))
	{
		menu();
	}
	else
	{
		cout << "ERROR:" << endl;
		cout << "Enter a command (1-5): " << endl;
		cout << ">> ";
		cin.clear();
		cin.ignore(256, '\n');
		cin >> command;
	}
}

/*
		while (std::cin.fail()) {
			cout << "ERROR:" << endl;
			cout << "Enter a command (1-5): " << endl;
			cout << ">> ";
			cin.clear();
			cin.ignore(256, '\n');
			cin >> command;
		}
*/
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

}

//Method to decrypt password
void decrypt(string encryptedPassword)
{

}

int main()
{
	stringstream convert(command);
	int C = 0;
	
	cout << "This program can encrypt and decrypt passwords." << endl;

	menu();

	while (!done)
	{
		cout << "Please enter a command (1-5): " << endl;
		cout << ">> ";
		cin >> command;
		convert >> C;

		switch (C)
		{
			case 1:
			{
				cout << "New password: ";
				cin >> currentPassword;
				cout << endl;
			}

			case 2:
			{
				cout << "Current password: " << currentPassword << endl << endl;
				break;
			}

			case 3:
			{
				encrypt(currentPassword);
				break;
			}

			case 4:
			{
				decrypt(currentPassword);
				break;
			}

			case 5:
			{
				done = true;
				break;
			}

			default:
			{
				cout << "ERROR: INVALID IMPUT" << endl << endl;
				break;
			}
		}
	}
	
	system("pause");
	return 0;
}
