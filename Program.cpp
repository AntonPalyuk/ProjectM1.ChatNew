#include "Program.h"
#include <cstdlib>
																								///Конструкторы

Program::Program()
{
	_users = new User[_programLength];
}


																								/// Сеттеры

void Program::setUser(string log, string pas, string name, int index)
{
	_users[index].setUser(log, pas, name);

}


void Program::setStatusOFF()
{
	_chatIsON = false;
}

								                                                                  /// Геттеры

User* Program::getUserByLogin(string login)
{
	for (int i = 0; i < _programLength; ++i)
	{
		if (_users[i].getLogin() == login)
		{
			return  &_users[i];
		}
		
	}

	return nullptr;
}

User* Program::getUserByName(string name)
{
	for (int i = 0; i < _programLength; ++i)
	{
		if (_users[i].getName() == name)
		{
			return  &_users[i];
		}	
		
	}

	return nullptr;

}



User* Program::getCurrentUser() { return _currentUser; }

bool Program::getProgramStatus()
{
	return _chatIsON;

}

																								  ///Функционал

void Program::addMessage( string to, string message)
{
	string from = _currentUser->getName();
	
	if (to == "all")
	{
		for (int i = 0; i < _programLength; ++i)
		{
			_users[i].addMessage(from, to, message);
		}

	}
	else
	{
		User* user_ptr = getUserByName(to);
		user_ptr->addMessage(from, to, message);
	}
	

}

void Program::printUser(int index)
{
	_users[index].printUser();

}

void Program::printUsers()
{
	for (int i = 0; i < _programLength; ++i)
		{
		_users[i].printUser();
		}

}

void Program::print(int index)
{
	_users[index].print();

}

void Program::registration()
{
	string login, password, name;

	cout << "Enter your login:  " << endl;
	cin >> login;
	cout << "Enter your password:  " << endl;
	cin >> password;
	cout << "Enter your name:  " << endl;
	cin >> name;

	addUser();
	setUser(login, password, name, _programLength - 1);
	_currentUser = nullptr;

	cout << "User successfully created  " << endl << endl;

}

void Program::login()
{
	string login, password;

	while (!_currentUser)
	{


		cout << "Enter your login:  " << endl;
		cin >> login;
		cout << "Enter your password:  " << endl;
		cin >> password;


		_currentUser = getUserByLogin(login);

		if (_currentUser == nullptr || (password != _currentUser->getPassword()))
		{
			_currentUser = nullptr;
			cout << "Wrong login or password, try again" << endl << endl;


		}
	}

}

void Program::mainMenu()
{
	system("cls");
	int key;
	
	cout << "Choose option:  " << endl << "1 - Registration " << endl << "2 - Login" << endl << "0 - Quit" << endl << endl;
	cin >> key;

	switch (key)
	{
	case 0:
		
		setStatusOFF();
		_currentUser = nullptr;
		break;
		system("cls");

	case 1:
		system("cls");
		registration();
		break;
		

	case 2:
		system("cls");
		login();
		break;

	default:
		system("cls");
		cout << "You chose wrong option, try again" << endl << endl;
		system("pause");
		system("cls");

		break;
	}

	

}

void Program::userMenu()
{
	system("cls");
	int key = 0;
	int userIndex = 0;

	string message, from, to;

	cout << "Choose option:  "  << endl << "1 - add message to " << endl << "2 - show chat" << endl  << "3 - show all users" << endl << "0 - Quit" << endl << endl;

	cin >> key;

	switch (key)
	{
	case 0:
		system("cls");
		_currentUser = nullptr;
		break;

	case 1:
		
		system("cls");
		cout << "To (name): " << endl;
		cin >> to;
		cout << endl;

		cout << "enter message" << endl;
		cin >> message;
		cout << endl;

		if (getUserByName(to) || to == "all")
		{
			addMessage(to, message);
			break;
		}
		else
		{					
			cout << "This user is not exist, try again" << endl << endl;
			break;
		}
		system("cls");
		

	case 2:
		system("cls");

		_currentUser->print();

		system("pause");
		system("cls");
		break;

	case 3:
		system("cls");

		printUsers();

		system("pause");
		system("cls");
		break;

	default:

		system("cls");

		cout << "You chose wrong option, try again" << endl << endl;

		system("pause");
		system("cls");
		break;
	}
}
	void Program::addUser()
	{
		User new_user;

		User* (n_d2) = new User[_programLength + 1];

		for (int i = 0; i < _programLength; ++i)
		{
			n_d2[i] = _users[i];
		}

		n_d2[_programLength] = new_user;

		delete[] _users;
		_users = n_d2;
		++_programLength;

}
                                   
	void Program::addMessageM(string from, string to, string message, int index)
	{
		_users[index].addMessage(from, to, message);

	}