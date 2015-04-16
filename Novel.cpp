/*Program: Novel Class Implementation
Author: Ruby Shrestha
Date: 16th April 2015*/

#include <string>
#include <iostream>
#include <sstream>
#include "Novel.h"

using namespace std;
		
Novel::Novel(string name, Author author, float price, int quantity, string publication, string genre, string ageGroup, bool isFiction, float avgRating)
		{
			this->name=name;
			this->author=author;
			this->publication=publication;
			this->genre=genre;
			this->ageGroup=ageGroup;
			this->isFiction=isFiction;
			setAvgRating(avgRating);
			setPrice(price);
			setQuantity(quantity);
		}
		
void Novel::setAvgRating(float avgRating){
			this->avgRating=avgRating;
		}
		
float Novel::getAvgRating(){
			return avgRating;
		}
			
string Novel::getGenre(){
			return genre;
		}
				
string Novel::getAgeGroup(){
			return ageGroup;
		}
		
bool Novel::getIsFiction(){
			return isFiction;
		}

	
string Novel::toString(){
			stringstream rate;
			rate << getAvgRating();
			return "\nThe book " + Book::getName() + " written by author " + Book::getAuthor().toString() + " is of genre  " + getGenre() + " and has average rating of " + rate.str();
		}
