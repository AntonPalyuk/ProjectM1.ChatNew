#pragma once
#include "Chat.h"
#include <iostream>
#include <string>
using namespace std;

class User : public Chat
{
private:
	string _login;
	string _pasword;
	string _name;
	
	Chat* _chats;            //ссылка на динамический массив, созданный в конструкторе 
	int _UserLength = 1;     //длинна массива (у каждого юзера 1 чат)

public:

																	///конструкторы
	User();          
	User(string log, string pas, string name);
	

																	/// геттеры  
	string getLogin();                                 
	string getPassword();
	string getName();

																	/// сеттеры
	void setUser(string log, string pas, string name);  
	void setLogin(string login);
	void setPasword(string pasword);
	void setName(string name);
	
																	//Функционал

	void printUser();
	void print();
	void addMessage(string from, string to, string message);
	
	
	//Добавление чатов полностью реализовать не успели 
	//void addChat(); 
	//void printChat(int index);
	//void addMessageTo(string from, string to, string message, int index);
};

