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
	Message();
	~Message() = default;
	Message(string from, string to, string message);
	
	string getFrom();
	string getTo();
	string getMessage();
	

	void setFrom(string s);
	void setTo(string s);
	void setMessage(string s);
	

	void print();
	
};

