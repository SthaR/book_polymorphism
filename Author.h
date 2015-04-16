/*Program: Author Class Interface
Author: Ruby Shrestha
Date: 16th April 2015*/

#include <string>
using namespace std;

#ifndef AUTHOR_H
#define AUTHOR_H

class Author{
	
	public:
		Author();
		Author(string name, string email, char gender);		
		void setEmail(string email);	
		string getEmail();		
		string getName();		
		char getGender();		
		string toString();
		
	private:
		string name;
		string email;
		char gender;
};

#endif