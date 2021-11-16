#include <string>
#include "Meals.h"
#include <iostream>
using namespace std;

Breakfast::Breakfast(){   
    cal = 0;
	mealtype = "default mealtype";
}


Breakfast& Breakfast::operator=(Breakfast& other){
	this->cal = other.cal;
	this->mealtype = other.mealtype;
	return *this;
}

double Breakfast::operator+(const Breakfast& obj){
	return (this->cal + obj.cal);
}


Breakfast::Breakfast(const Breakfast& obj){
	cal =obj.cal;
	mealtype = obj.mealtype;
}


double Breakfast::PortionCal(string portion){

	if (portion == "small")
	{
		this->cal = 200;
		return this->cal;
	}

	if (portion == "medium")
	{
		this->cal = 400;
		return this->cal;
	}
	if (portion == "large")
	{
		this->cal = 600;
		return this->cal;
	}
}

Lunch::Lunch(){
	
	cal = 0;
	mealtype = "default mealtype";
}

Lunch& Lunch::operator=(Lunch& other){
	this->cal = other.cal;
	this->mealtype = other.mealtype;
	return *this;
}


double Lunch:: operator+(const Lunch& obj){
	return (this->cal + obj.cal);
}


Lunch::Lunch(const Lunch& obj){
	cal = obj.cal;
	mealtype = obj.mealtype;
}

double Lunch::PortionCal(string portion){

	if (portion == "small")
	{
		this->cal = 400;
		return this->cal;
	}

	if (portion == "medium")
	{
		this->cal = 600;
		return this->cal;
	}
	if (portion == "large")
	{
		this->cal = 800;
		return this->cal;
	}
}


Dinner::Dinner()
{
	mealtype = "";
	cal = 0;
}


Dinner& Dinner::operator=(Dinner& other){
	this->cal = other.cal;
	this->mealtype = other.mealtype;
	return *this;
}


double Dinner:: operator+(const Dinner& obj){
	return (this->cal + obj.cal);
}


Dinner::Dinner(const Dinner& obj){
	cal = obj.cal;
	mealtype = obj.mealtype;
}


double Dinner::PortionCal(string portion){

	if (portion == "small")	{
		this->cal = 400;
		return this->cal;
	}

	if (portion == "medium")	{
		this->cal = 600;
		return this->cal;
	}
	if (portion == "large")	{
		this->cal = 800;
		return this->cal;
	}
}

ostream& operator<<(ostream& out, const Breakfast& obj){
	out << "Meal Name: " <<obj.mealtype << endl << "Calories Taken : " <<obj.cal<<endl;
	return out;
}

ostream& operator<<(ostream& out, const Lunch& obj){
	out << "Meal name: " << obj.mealtype << endl << "Calories Taken: " << obj.cal << endl;
	return out;
}

ostream& operator<<(ostream& out, const Dinner& obj){
	out << "Meal name: " << obj.mealtype << endl << "Calories Taken: " << obj.cal << endl;
	return out;
}

