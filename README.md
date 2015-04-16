The project consists of altogether four classes:

	1. Author Class
	2. Book Class (Base Class)
	3. Novel Class (Derived Class of Book)
	4. TextBook Class (Derived Class of Book)

--------------------------------------------------------------------------

1. Author Class:
The Author class has three properties: name, email and gender. Since name and gender of a person do not change with time, they do not have setter functions. However, their getter functions are available. Email is changeable; hence it has setter function as well, along with getter function. It has two constructors, one empty and next with three parameters for initialization at the time of declaration. toString() function returns all the details of author.

2. Book Class:
Book class, being the base class of Novel and TextBook, consists of all the common properties and methods of Novel and TextBook. Since it is abstract class, it does not have constructors.

3. Novel Class:
This class has properties and methods pertaining only to Novel objects.

4. TextBook Class:
This class has properties and methods pertaining only to Novel objects.

----------------------------------------------------------------------------

Implementation of Polymorphism:

Polymorphic behavior in case of inherited classes is shown in this project by the means of toString() method. 

toString() in Book class is a pure virtual function: [virtual string toString()=0;] And, this means it MUST be present in all the derived classes of Book class.

Hence, Book class is an abstract class of which no object can be created. Since we cannot create object out of Book class, having its constructor is of no use. Hence, we remove the constructors in Book class. We initialize everything in the derived classes Novel/TextBook.

When toString() method is called by the pointer object of Book pointing to object of Novel class (bk1), details of Novel object is returned. 
[bk1->toString()'] : returns details of Novel


On the other hand, when toString() method is called by the pointer object of Book pointing to object of TextBook class (bk2), details of Textbook is shown. 
[bk2->toString()'] : returns details of TextBook

**Hence, though both bk1 and bk2 are pointers of 'Book' class and in both case function 'toString()' is called, different behavior is shown in each case, which is actually polymorphic behavior.**


------------------------------------------------------------------------------

Author: Ruby Shrestha



