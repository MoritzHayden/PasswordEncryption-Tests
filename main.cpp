#include <iostream>
#include <string>
using namespace std;

//Global variables
int command = 0;
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
	cout << "-------------------------------------------------" << endl;
	cout << "Please enter a command (1-5): " << endl;
	cout << ">> ";
	cin >> command;

	while (std::cin.fail()) {
		cout << "ERROR:" << endl;
		cout << "Enter a command (1-5): " << endl;
		cout << ">> ";
		cin.clear();
		cin.ignore(256, '\n');
		cin >> command;
	}
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
	cout << "This program can encrypt and decrypt passwords." << endl;

	while (!done)
	{
		menu();
		
		switch (command)
		{
			case 1:
			{
				cout << "New password: ";
				cin >> currentPassword;
				cout << endl;
				break;
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

//NOTE:
// For improvement, add a 'help' option that pulls
// up the commands window for reference, instead of
// it popping up after every command
