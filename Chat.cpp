#include "Chat.h"

														//Конструторы

Chat::Chat()
{                                         // Изначально хотели добавить функцию создания
	_messages = new Message[_length];     //	новых чатов (например приватных), но не успели 
	                                      //	поэтому остался просто массив из одного элемента
}

														//Функционал

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

