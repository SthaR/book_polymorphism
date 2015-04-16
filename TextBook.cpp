/*Program: TextBook Class Implementation
Author: Ruby Shrestha
Date: 16th April 2015*/

#include <string>
#include <cstdlib>
#include "TextBook.h"

using namespace std;

TextBook::TextBook(string name, Author author, float price, int quantity, string publication, string subject, string level, int edition)
		{
			this->name=name;
			this->author=author;
			this->publication=publication;
			this->edition=edition;
			this->subject=subject;
			setLevel(level);
			setPrice(price);
			setQuantity(quantity);
		}
		
void TextBook::setLevel(string level){
			this->level=level;
		}
		
int TextBook::getEdition(){
			return edition;
		}
		
string TextBook::getLevel(){
			return level;
		}
		
string TextBook::getSubject(){
			return subject;
		}
	
string TextBook::toString(){
	char buffer[10];	
	itoa(getEdition(), buffer, 10);
	return "\n\nThe book " + Book::getName() + " written by author " + Book::getAuthor().toString() + " of subject " + getSubject() + " is of edition " + buffer + " and is for " + getLevel() + " level.";
}
