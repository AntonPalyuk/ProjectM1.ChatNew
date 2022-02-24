#include "Message.h"

									//Конструторы

Message::Message(): _from("DefFrom"), _to("DefTo"), _message("DefMessage") {}

Message::Message(string from, string to, string message) :_from{ from }, _to{ to }, _message{ message }{}

									//Геттеры
string Message::getFrom()
{
	return _from;
}

string Message::getTo()
{
	return _to;
}

string Message::getMessage()
{
	return _message;
}

									//Сеттеры 
void Message::setFrom(string s)
{
	_from = s;
}

void Message::setTo(string s)
{
	_to = s;
}

void Message::setMessage(string s)
{
	_message = s;
}

									//Функционал
void Message::print()
{
	cout << "From:  " << getFrom() << endl;
	cout << "To:  " << getTo() << endl;
	cout << "Message:  " << getMessage() << endl << endl;

}

