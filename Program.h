#pragma once
#include "User.h"
#include <string>
#include <iostream>
using namespace std;


class Program : public User
{
private:

	User* _currentUser = nullptr;
	
	User* _users;             //ссылка на динамический массив, созданный в конструкторе 
	int _programLength = 3;   //длинна массива (по умолчанию 3 юзера для отладки)
	bool _chatIsON = true;  

public:

								///Конструкторы

	Program();

								/// Сеттеры

	void setUser(string log, string pas, string name, int index);
	void setStatusOFF();

								/// Геттеры

	User* getUserByLogin(string login);
	User* getUserByName(string name);
	User* getCurrentUser();
	bool getProgramStatus();

								///Функционал

	void addMessage( string to, string message);
	void printUsers();
	void print(int index);
	void printUser(int index);
	void login();
	void registration();
	void mainMenu();
	void userMenu();
	void addUser();

	void addMessageM(string from, string to, string message, int index); // Для отладки

	
	
};

