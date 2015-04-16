/*Program: Author Class Implementation
Author: Ruby Shrestha
Date:  16th April 2015*/

#include <string>
#include "Author.h"

using namespace std;

Author::Author(){
} 

Author::Author(string name, string email, char gender){
		setEmail(email);
		this->name=name;
		this->gender=gender;
}
		
void Author::setEmail(string email){
		this->email=email;
}
		
string Author::getEmail(){
		return email;
}
		
string Author::getName(){
		return name;
}
		
char Author::getGender(){
		return gender;
}
		
string Author::toString(){
		return getName() + " at " + getEmail();
}
