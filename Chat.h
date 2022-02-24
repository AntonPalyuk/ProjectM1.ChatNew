#pragma once
#include <string>
#include "Message.h"
#include <iostream>
using namespace std;

class Chat : public Message
{
private:
	
	Message* _messages; //ссылка на динамический массив 
	int _length = 0;    //длинна массива 
	

public:
							//Конструторы
	Chat();

							//Функционал
	void print();
	void addMessage(string from, string to, string message);
	
};

