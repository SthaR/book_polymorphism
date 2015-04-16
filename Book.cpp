/*Program: Book Class Implementation
Author: Ruby Shrestha
Date: 16th April 2015*/

#include <string>
#include "Book.h"
using namespace std;

	
void Book::setPrice(float price){
		this->price=price;
}
		
void Book::setQuantity(int quantity){
		this->quantity=quantity;
}
		
string Book::getName(){
		return name;
}
		
float Book::getPrice(){
		return price;
}
		
int Book::getQuantity(){
		return quantity;
}
		
Author Book::getAuthor(){
		return author;
}

string Book::getPublication(){
	return publication;
}
		

float Book::getWorth(){
			return price*quantity;
		}