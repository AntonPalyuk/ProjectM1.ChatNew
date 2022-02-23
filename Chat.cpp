#include "Chat.h"

Chat::Chat()
{
	_messages = new Message[_length];

}

void Chat::addMessage(string from, string to, string message)
{
	Message new_m(from, to, message);

	Message* n_d = new Message[_length + 1];

	for (int i = 0; i < _length; ++i)
	{
		n_d[i] = _messages[i];
	}

	n_d[_length] = new_m;

	delete[] _messages;
	_messages = n_d;
	++_length;

}

void Chat::print()
{
	for (int i = 0; i < _length; ++i)
	{
		_messages[i].print();

	}

}

