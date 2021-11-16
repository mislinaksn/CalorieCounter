#ifndef MEALS_H
#define MEALS_H
#include <string>

using namespace std;

class Breakfast {
private:
	double cal;
	string mealtype;
public:

	Breakfast();
	Breakfast(const Breakfast& ); //Copy Constructor
	Breakfast& operator=(Breakfast& ); //Assigment constructor
	double operator+(const Breakfast& );
	friend ostream& operator<<(ostream& , const Breakfast& ); //<< constructor
	double PortionCal(string portion);
	
};
class Lunch {
private:
	double cal;
	string mealtype;
public:
	Lunch();
	Lunch(const Lunch& ); //Copy Constructor
	Lunch& operator=(Lunch& ); //Assigment constructor
	double operator+(const Lunch& );
	friend ostream& operator<<(ostream& , const Lunch& ); //<< constructor
	double PortionCal(string portion);
};
class Dinner {
private:
	double cal;
	string mealtype;
public:
	Dinner();
	Dinner(const Dinner& ); //Copy Constructor
	Dinner& operator=(Dinner& ); //Assigment constructor
	double operator+(const Dinner& );
	friend ostream& operator<<(ostream& , const Dinner& ); //<< constructor
	double PortionCal(string portion);
};

#endif
