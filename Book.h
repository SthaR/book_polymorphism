/*Program: Book Class Interface
Author: Ruby Shrestha
Date: 16th April 2015*/

#include <string>
#include "Author.h"
using namespace std;

#ifndef BOOK_H
#define BOOK_H

class Book{
	
	protected:
		string name;
		Author author;
		string publication;
		
	private:
		float price;
		int quantity;		
	
	public:	
		
		void setPrice(float price);		
		void setQuantity(int quantity);		
		string getName();
		float getPrice();		
		int getQuantity();		
		Author getAuthor();	
		string getPublication();
		float getWorth();	
		virtual string toString()=0;	
};

#endif