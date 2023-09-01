#pragma once
#include "Book.h"

class ConversationBook : public Book
{
	string language;
public:
	ConversationBook(int);
	void print_CB();
};

