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

	//Encrypt password:
	//Store in 2D array
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

	/*
	//DELETE THIS
	//Convert 2D array to 1D column by column
	int row = 0;
	int col = 0;
	int countReset = 0;
	for (int l = 0; l < 32; l++)
	{
		if (row == 0 && (countReset != 8))
		{
			col++;
		}

		PassArr1D[l] = passArr[row][col];
		row++;
		if (row == 4)
		{
			countReset++;
			row = 0;
		}
	}
	*/

	//NOT DONE
	int countReset = 0;
	int x = 0;
	int y = 0;
	for (int a = 0; a < 32; a++)
	{
		PassArr1D[a] = passArr[y][x];

		if (x == 8)
		{
			x=0;
		}
		else
		{
			x++;
		}

		if (a % 4 == 0)
		{
			y++;
		}
		else
		{
			y = 0;
		}
	}
	
	cout << endl;

	//Print 1D array
	cout << "1D Array:" << endl;
	for (int m = 0; m < 32; m++)
	{
		//REMOVE WITH NUMBERLINE
		if (m > 9)
		{
			cout << " ";
		}
		cout << PassArr1D[m] << " ";
	}

	//REMOVE:
	//Print numberline for reference
	cout << "\n";
	for (int m = 0; m < 32; m++)
	{
		cout << m << " ";
	}
	//DELETE THIS
	cout << endl << endl << "Times 'row' was reset: " << countReset << endl;

	cout << endl;

	//Convert 1D array to vector of corresponding number values
	vector<int> intPassVector;
	int temp = 0;
	for (int z = 0; z < 32; z++)
	{
		//Get numerical value of letters, ignoring caps
		temp = PassArr1D[z];

		if (temp < 97)
		{
			temp = temp + 32;
		}

		intPassVector.push_back(temp - 96);
	}

	//Replace two digits with each digit
	for (int e = 0; e < 32; e++)
	{
		if (intPassVector.at(e) > 9)
		{
			if (intPassVector.at(e) < 20)
			{
				//TODO:
				//Delete element (begin+e)-1 and replace with either 1 or 2
				intPassVector.erase(intPassVector.begin()+e);
				intPassVector.insert(intPassVector.begin()+e, (intPassVector.at(e) % 10));
			}
			else if (intPassVector.at(e) < 30 && intPassVector.at(e) >= 20)
			{
				//TODO:
				//Delete element (begin+e)-1 and replace with either 1 or 2
				intPassVector.erase(intPassVector.begin() + e);
				intPassVector.insert(intPassVector.begin() + e, (intPassVector.at(e) % 20));
			}
		}
	}

	//DELETE
	//Print full vector
	cout << "Vector: ";
	for (int k = 0; k < intPassVector.size(); k++)
	{
		cout << intPassVector.at(k) << " ";
	}
	cout << endl << endl;

	//Add adjacent digits


	//	TODO:
	//	Assign lastHash here
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
