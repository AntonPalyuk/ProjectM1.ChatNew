#pragma once
#include "Chat.h"
#include "Message.h"
#include <iostream>
#include <string>
using namespace std;

class User : public Chat
{
private:
	string _login;
	string _pasword;
	string _name;
	
	Chat* _chats;
	int _UserLength = 1;

public:

											///конструкторы
	User();          
	User(string log, string pas, string name);
	//~User();

											/// геттеры  
	string getLogin();                                 
	string getPassword();
	string getName();

											/// сеттеры
	void setUser(string log, string pas, string name);  
	void setLogin(string login);
	void setPasword(string pasword);
	void setName(string name);
	

	void printUser();
	void print();
	void addMessage(string from, string to, string message);
	void addMessageTo(string from, string to, string message, int index);
	
	//
	void addChat();
	void printChat(int index);
	//User& operator= (User old);
};

