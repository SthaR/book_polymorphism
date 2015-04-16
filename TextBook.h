/*Program: TextBook Class Interface
Author: Ruby Shrestha
Date: 16th April 2015*/

#include <string>
#include "Book.h"

#ifndef TEXTBOOK_H
#define TEXTBOOK_H

class TextBook:public Book{
	
	private:
		string subject;
		string level;
		int edition;
	
	public:
		
		TextBook(string name, Author author, float price, int quantity, string publication, string subject, string level, int edition);		
		void setLevel(string level);	
		int getEdition();	
		string getLevel();		
		string getSubject();
		string toString();
};

#endif