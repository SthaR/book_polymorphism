/*Program: Novel Class Interface
Author: Ruby Shrestha
Date: 16th April 2015*/

#include <string>
#include "Book.h"

#ifndef NOVEL_H
#define NOVEL_H

class Novel:public Book{
	
	private:
		string genre;
		string ageGroup;
		bool isFiction;
		float avgRating;
	
	public:
		Novel(string name, Author author, float price, int quantity, string publication, string genre, string ageGroup, bool isFiction, float avgRating);		
		void setAvgRating(float avgRating);		
		float getAvgRating();			
		string getGenre();				
		string getAgeGroup();		
		bool getIsFiction();	
		string toString();
};

#endif