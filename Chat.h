#pragma once
#include <string>
#include "Message.h"
#include <iostream>
using namespace std;

class Chat : public Message
{
private:
	
	Message* _messages;
	int _length = 0;
	

public:

	

	Chat();
	
	

	void print();
	void addMessage(string from, string to, string message);
	
};

