#pragma once
#include <string>
#include <iostream>
using namespace std;

class Message
{
private:
	string _from;
	string _to;
	string _message;
	

public:
									//Конструторы
	Message();
	~Message() = default;
	Message(string from, string to, string message);
									
									//Геттеры
	string getFrom();
	string getTo();
	string getMessage();
	
									//Сеттеры								
	void setFrom(string s);
	void setTo(string s);
	void setMessage(string s);
	
									//Функционал
	void print();
	
};

